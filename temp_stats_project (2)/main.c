#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_functions.h"

void print_help() {
    printf("\nTemperature Statistics Processor\n");
    printf("Usage:\n");
    printf("  program -f <filename.csv> [-m <month>]\n\n");
    printf("Options:\n");
    printf("  -f    Input CSV file (required)\n");
    printf("  -m    Month number (1-12, optional)\n");
    printf("  -h    Show this help\n\n");
    printf("CSV format:\n");
    printf("  YEAR;MONTH;DAY;HOUR;MINUTE;TEMPERATURE\n");
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        print_help();
        return 1;
    }

    char *filename = NULL;
    int month = 0;
    TempRecord records[MAX_RECORDS];
    int size = 0;

    // Разбор аргументов
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-h") == 0) {
            print_help();
            return 0;
        } else if (strcmp(argv[i], "-f") == 0 && i+1 < argc) {
            filename = argv[++i];
        } else if (strcmp(argv[i], "-m") == 0 && i+1 < argc) {
            month = atoi(argv[++i]);
            if (month < 1 || month > 12) {
                fprintf(stderr, "ERROR: Month must be 1-12\n");
                return 1;
            }
        }
    }

    if (!filename) {
        fprintf(stderr, "ERROR: No input file specified\n");
        print_help();
        return 1;
    }

    if (!load_from_csv(filename, records, &size)) {
        return 1;
    }

    print_stats(records, size, month);
    return 0;
}