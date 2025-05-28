#include <stdio.h>

int main() 
{
    int array[10]; 
    int max1, max2; 
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &array[i]);
    }

    if (array[0] > array[1]) 
    {
        max1 = array[0];
        max2 = array[1];
    }
     else 
    {
        max1 = array[1];
        max2 = array[0];
    }

    for (int i = 2; i < 10; i++) 
    {
        if (array[i] > max1) 
        {
            max2 = max1; 
            max1 = array[i]; 
        }
         else if (array[i] > max2) 
        {
            max2 = array[i];
        }
    }
    printf("%d\n", max1 + max2);

    return 0;
}
