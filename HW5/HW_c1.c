#include <stdio.h>
int glo(int num)
{
	return(num<0)?-num:num;
}
int main ()
{
	int num;
	scanf("%d",&num);
	printf("%d",glo(num));
	return 0;
}		
