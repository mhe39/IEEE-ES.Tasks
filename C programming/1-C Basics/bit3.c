#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,k,x ;
	printf("Input number:");
	 scanf("%d",&n);
	printf("Input nth bit number:");
    scanf("%d",&k);
      x =((n >> (k )) & 1) ;
       
        printf(" %d bit of %d is set(%d)",k,n,x);
    return 0;
}