#include <stdio.h>

int main() 
{
    float arr[12];
    float sum = 0;
    float average;

    for(int i = 0; i < 12; i++) 
    {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    average = sum / 12;
    printf("%.2f\n", average);

    return 0;
}
