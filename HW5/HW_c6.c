#include <stdio.h>
#include <math.h>   


unsigned long long chess (int N) {

return (unsigned long long)pow(2, N - 1);
}

   int main() 
{
    int N;
    scanf("%d", &N);  
    

    unsigned long long grains = chess(N);
    printf("%llu",  grains);

    return 0;
}
