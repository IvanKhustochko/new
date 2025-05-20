#include <stdio.h>

void print_digits_forward(int n) 
{
    if (n < 10) 
    {
        printf("%d ", n); 
    }
     else 
    {
        print_digits_forward(n / 10);  
        printf("%d ", n % 10);         
    }
}

int main() 
{
    int num;
    scanf("%d", &num);

    if (num == 0) 
    {
        printf("0");  
    }
     else 
    {
        print_digits_forward(num);
    }

    return 0;
}
