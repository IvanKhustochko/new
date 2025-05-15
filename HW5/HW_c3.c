#include <stdio.h>

int middle(int a, int b) 
{
    return (a + b) / 2;
}

int main() 
{
    int num1, num2;
    scanf("%d %d", &num1,&num2);   
    printf("%d", middle(num1, num2));
    
    return 0;
}
