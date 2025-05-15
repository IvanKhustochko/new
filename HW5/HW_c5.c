#include <stdio.h>
int sum_to_n(int n) 
{
    int sum = 0;  
    
    for (int i = 1; i <= n; i++) 
    {
        sum += i;  
    }
    
    return sum;
}

int main() 
{
    int num;
    scanf("%d", &num);   
   
    printf("%d", sum_to_n(num));
    
    return 0;
}
