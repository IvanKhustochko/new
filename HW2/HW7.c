#include <stdio.h>
 int main ()
 {
	int a;
	scanf("%d" ,&a);
	int mult = (a/100)*(a%100/10)*(a%10);
	printf("%d" ,mult);
	return 0;
}

	 
