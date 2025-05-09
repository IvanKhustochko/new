#include <stdio.h>
#include <inttypes.h>


 int main () {
	 
	 int a,b,c,d,e,max,min;{
		 scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);}
		 if (a>=b&&a>=c&&a>=d&&a>=e){
	        max=a;}
		 else if(a<=b&&a<=c&&a<=d&&a<=e){ 
		    min=a;}
		 if (b>=a&&b>=c&&b>=d&&b>=e){
		    max=b;}
		 else if(b<=a&&b<=c&&b<=d&&b<=e){
		    min=b;}
		 if (c>=a&&c>=b&&c>=d&&c>=e){
		    max=c;}
		 else if (c<=a&&c<=b&&c<=d&&c<=e){
		    min=c;}
	     if (d>=a&&d>=b&&d>=c&&d>=e){
		    max=d;}
		 else if (d<=a&&d<=b&&d<=c&&d<=e){
			min=d;}
	     if (e>=a&&e>=b&&e>=c&&e>=d){
			 max=e;}
		 else if (e<=a&&e<=b&&e<=c&&e<=d){
			 min=e;}
			 if (a==b&&b==c&&c==d&&d==e){
				 min=a;
				 max=b;}
											
		 printf("%d",max+min);
		 return 0;
	 }	 	 
				  
					  
				  
			
	 
