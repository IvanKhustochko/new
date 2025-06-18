
#include <stdio.h>
#include <string.h>

int main() 
{
    FILE *input, *output;
    char line[1000]; 
    int length;

    
    input = fopen("input.txt", "r");
    if (input == NULL) 
    {
        return 1;
    }


    if (fgets(line, sizeof(line), input) == NULL) 
    {
        fclose(input);
        return 1;
    }

    line[strcspn(line, "\n")] = '\0';
    fclose(input);
    length = strlen(line);
    output = fopen("output.txt", "w");
    if (output == NULL) {
        return 1;
    }

    fprintf(output, "%s, %s, %s %d\n", 
            line, line, line, length);


    fclose(output);

    return 0;
}
