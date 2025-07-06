#ifndef TEMP_FUNCTIONS_H
#define TEMP_FUNCTIONS_H

#define MAX_RECORDS 100000

typedef struct {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int temperature;
} TempRecord;

// Основные функции
int load_from_csv(const char *filename, TempRecord records[], int *size);
void print_stats(TempRecord records[], int size, int month);

// Вспомогательные функции
int is_valid_record(TempRecord *r);

#endif