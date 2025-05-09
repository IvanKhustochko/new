#include <stdio.h>
#include <inttypes.h>
 int main ()
 {
	 int a,b,c,num;
	 scanf("%d",&num);
	 a=num/100;
	 b=(num/10)%10;
	 c=num%10;
	 if (a>b&&a>c){
		 printf("%d",a);}
		 else if (b>c&&b>a){
		 printf("%d",b);}
		 else  {
		 printf("%d",c);}
		 return 0;
	 }
