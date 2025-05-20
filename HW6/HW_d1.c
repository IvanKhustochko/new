#include <stdio.h>

void print_numbers(int n) {
    if (n > 1) {
        print_numbers(n - 1);
    }
    printf("%d ", n);
}

int main() {
    int num;
    scanf("%d", &num);
    
    print_numbers(num);
    
    return 0;
}
