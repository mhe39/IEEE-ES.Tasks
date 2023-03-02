#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,k,x ;
	printf("Input number:");
	 scanf("%d",&n);
	printf("Input nth bit number:");
    scanf("%d",&k);
	
    x =n & (~(1 << k)) ;
	  
	  
	   printf("successful clearing.\n\n");
	  printf("Number before clearing %d bit : %d (in decimal)\n",k,n);
	  printf("Number after clearing %d bit : %d (in decimal)",k,x);
	return 0 ;
}
	  
	  