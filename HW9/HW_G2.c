#include <stdio.h>
#include <stdlib.h>

int main() 
{

    FILE *input = fopen("input.txt", "r");
    if (input == NULL) 
    {
        return 1;
    }    
    int N;
    fscanf(input, "%d", &N);
    fclose(input);
    if (N % 2 != 0 || N > 26) 
    {
        return 1;
    }
    FILE *output = fopen("output.txt", "w");
    char even_digits[] = {'2', '4', '6', '8'};
    int digit_index = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0) 
        {
            fputc(even_digits[digit_index % 4], output);
            digit_index++;
        }
         else 
        {
            fputc('A' + (i / 2), output);
        }
    }

    fclose(output);
    return 0;
}
