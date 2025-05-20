#include <stdio.h>

int sum_numbers(int n) 
{
    if (n == 1) 
{
        return 1;  
}
    else 
{
        return n + sum_numbers(n - 1);  
}
}

int main() {
    int num;
    scanf("%d", &num);
    
    int result = sum_numbers(num);
    printf("%d\n",result);
    
    return 0;
}
