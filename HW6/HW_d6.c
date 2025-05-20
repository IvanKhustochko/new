#include <stdio.h>

void reverse_string() 
{
    char c;
    scanf("%c", &c);  
    
    if (c != '.') 
    {   
		reverse_string();  
        printf("%c", c); 
    }
    
}

int main() 
{
    reverse_string();
    printf("\n");
    return 0;
}
