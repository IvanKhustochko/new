#include <stdio.h>

int main() {
    int array[5]; 
    int sum = 0;   
    float average; 

    for (int i = 0; i < 5; i++) 
    {
    
        scanf("%d", &array[i]);
        sum += array[i]; 
    }
    average = (float)sum / 5;
   
    printf("%.2f\n", average);

    return 0;
}
