#include <stdio.h>

int power(int n, int p) {
    int result = 1;
    
    for (int i = 0; i < p; i++) 
    {
        result *= n;
    }
    
    return result;
}

int main() 
{
    int num, exp;     
    scanf("%d %d", &num,&exp);
{           
    printf("%d",  power(num, exp));
}    
    return 0;
}
