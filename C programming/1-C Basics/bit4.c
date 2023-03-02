#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,k,x ;
	printf("Input number:");
	 scanf("%d",&n);
	printf("Input nth bit number:");
    scanf("%d",&k);
      x =((n >> (k )) | 1) ;
	  
	  
         printf("Bit set successfully.\n\n");
        printf(" Number before setting %d bit:%d(in decimal)\n ",k,n);
		printf(" Number after setting %d bit:%d(in decimal)\n",k,x);
    return 0;
}