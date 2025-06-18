#include <stdio.h>
#include <string.h>

int main() {
    // 1. Открытие файлов
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");
    
    if (inputFile == NULL || outputFile == NULL) {
        printf("Ошибка при открытии файлов\n");
        return 1;
    }
    
    // 2. Чтение строки
    char str[1001];
    fgets(str, 1001, inputFile);
    
    // 3. Определение длины строки
    int length = strlen(str);
    
    if (length == 0) {
        fclose(inputFile);
        fclose(outputFile);
        return 0;
    }
    
    // 4. Находим последний символ (игнорируя \n)
    char lastChar = str[length - 1];
    if (lastChar == '\n') {
        length--;
        lastChar = str[length - 1];
    }
    
    // 5. Поиск совпадений с нумерацией с 0
    int isFirst = 1; // Флаг первого вывода
    
    for (int i = 0; i < length - 1; i++) {
        if (str[i] == lastChar) {
            if (!isFirst) {
                fprintf(outputFile, " "); // Пробел между числами
            }
            fprintf(outputFile, "%d", i); // Вывод индекса (с 0)
            isFirst = 0;
        }
    }
    
    // 6. Закрытие файлов
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
