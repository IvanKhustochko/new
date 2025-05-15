#include <stdio.h>

int main()
{
    char a;
    while ((a = getchar()) != '\n')
    {
        if (a >= 'a' && a <= 'z')
            putchar('A' + (a - 'a'));
        else if (a != '.')            
            putchar(a);
    }
    return 0;
}
