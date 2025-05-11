#include <stdio.h>

int main(){

int a, k;
scanf("%d", &a);
while (a) {
    k = a%10;
    a = a/10;
    if (a%10 == k){
        printf("YES\n");
        break;
    }   
}
if (!a)
    printf("NO\n");

return 0;   
}
