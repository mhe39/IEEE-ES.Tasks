#include <stdio.h>
#include <stdlib.h>
int main()
{
	
	int x , y ;
 // x is the original number
 // y is the flipped number	
	printf("Enter input number:");
	
	scanf("%d",&x);
	
	y = ~ x ;
	
	printf("Number %d after bits are flipped: %d (in decimal)",x,y);
	
    return 0 ;
}