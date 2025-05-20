#include <stdio.h>

void print_reverse(int n) 
{
    if (n < 10) 
    {
        printf("%d ", n);  
    }
     else 
    {
        printf("%d ", n % 10);
        print_reverse(n / 10);  
    }
}

int main() 
{
    int num;
    scanf("%d", &num);
    
    if (num == 0) 
    {
        printf("0 "); 
    }
     else 
    {
        print_reverse(num);
    }
    
    return 0;
}
