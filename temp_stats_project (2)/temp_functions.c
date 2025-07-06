#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "temp_functions.h"

int is_valid_record(TempRecord *r) {
    return (r->month >= 1 && r->month <= 12) && 
           (r->temperature >= -99 && r->temperature <= 99);
}

int load_from_csv(const char *filename, TempRecord records[], int *size) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        fprintf(stderr, "ERROR: Cannot open file %s (%s)\n", 
                filename, strerror(errno));
        return 0;
    }

    char line[256];
    *size = 0;
    int line_num = 0;

    while (fgets(line, sizeof(line), file) && *size < MAX_RECORDS) {
        line_num++;
        
        // Пропускаем заголовок
        if (line_num == 1) continue;

        TempRecord r;
        int parsed = sscanf(line, "%d;%d;%d;%d;%d;%d",
                          &r.year, &r.month, &r.day,
                          &r.hour, &r.minute, &r.temperature);

        if (parsed != 6) {
            fprintf(stderr, "WARNING: Skip line %d (parse error)\n", line_num);
            continue;
        }

        if (!is_valid_record(&r)) {
            fprintf(stderr, "WARNING: Skip line %d (invalid data)\n", line_num);
            continue;
        }

        records[(*size)++] = r;
    }

    fclose(file);
    
    if (*size == 0) {
        fprintf(stderr, "ERROR: No valid data found in file\n");
        return 0;
    }
    
    printf("Successfully loaded %d records from %s\n", *size, filename);
    return 1;
}

void print_stats(TempRecord records[], int size, int month) {
    if (size == 0) {
        printf("No data available\n");
        return;
    }

    char *months[] = {"January","February","March","April","May","June",
                     "July","August","September","October","November","December"};

    if (month > 0) {
        printf("\nStatistics for %s:\n", months[month-1]);
        
        int count = 0, sum = 0, min = 100, max = -100;
        for (int i = 0; i < size; i++) {
            if (records[i].month == month) {
                int temp = records[i].temperature;
                sum += temp;
                if (temp < min) min = temp;
                if (temp > max) max = temp;
                count++;
            }
        }

        if (count > 0) {
            printf("Records: %d\n", count);
            printf("Average: %.1f C\n", (float)sum / count);
            printf("Minimum: %d C\n", min);
            printf("Maximum: %d C\n", max);
        } else {
            printf("No data for this month\n");
        }
    } else {
        printf("\nYearly statistics:\n");
        
        int count = 0, sum = 0, min = 100, max = -100;
        for (int i = 0; i < size; i++) {
            int temp = records[i].temperature;
            sum += temp;
            if (temp < min) min = temp;
            if (temp > max) max = temp;
            count++;
        }

        printf("Total records: %d\n", count);
        printf("Average: %.1f C\n", (float)sum / count);
        printf("Minimum: %d C\n", min);
        printf("Maximum: %d C\n", max);
    }
}