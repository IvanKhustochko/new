#include <stdio.h>

void to_bin(int n) 
{
    if (n > 1) 
    {
        to_bin(n / 2);  
    }
    printf("%d", n % 2);   
}

int main() 
{
    int num;
    scanf("%d", &num);
    
    if (num < 0) 
    {    
        return 1;
    }
    
    if (num == 0) 
    {
        printf("0"); 
    } 
    else 
    {
        to_bin(num);
    }
    
    printf("\n");
    return 0;
}
