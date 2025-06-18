#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 1001

int main() 
{
    FILE *input_file = fopen("input.txt", "r");
    if (input_file == NULL) 
    {
        return 1;
    }

    char text[MAX_LENGTH];
    if (fgets(text, MAX_LENGTH, input_file) == NULL) {
        fclose(input_file);
        return 1;
    }
    fclose(input_file);

    for (int i = 0; text[i] != '\0'; i++) 
    {
        switch (text[i]) 
        {
            case 'a': text[i] = 'b'; break;
            case 'b': text[i] = 'a'; break;
            case 'A': text[i] = 'B'; break;
            case 'B': text[i] = 'A'; break;
            default: break;
        }
    }

    FILE *output_file = fopen("output.txt", "w");
    if (output_file == NULL) 
    {
        return 1;
    }

    fprintf(output_file, "%s", text);
    fclose(output_file);

    return 0;
}
