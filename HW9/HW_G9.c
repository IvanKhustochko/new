#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1001 

int main() 
{
    FILE *input_file = fopen("input.txt", "r");
    if (input_file == NULL) 
    {
        return 1;
    }

    char text[MAX_LENGTH];
    if (fgets(text, MAX_LENGTH, input_file) == NULL) 
    {
        fclose(input_file);
        return 1;
    }
    fclose(input_file);
    
    char result[MAX_LENGTH];
    int result_index = 0;

    for (int i = 0; text[i] != '\0'; i++) 
    {
        if (text[i] == ' ')
        {
            continue;
        }

        int is_duplicate = 0;
        for (int j = 0; j < result_index; j++) 
        {
            if (result[j] == text[i]) 
            {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) {
            result[result_index] = text[i];
            result_index++;
        }
    }
    result[result_index] = '\0';

    FILE *output_file = fopen("output.txt", "w");
    if (output_file == NULL) 
    {
        return 1;
    }

    fprintf(output_file, "%s", result);
    fclose(output_file);

    return 0;
}
