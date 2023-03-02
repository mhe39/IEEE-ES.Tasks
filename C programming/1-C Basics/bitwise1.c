#include<stdio.h>
int main()
{
	int x,y;

	printf("Input number:");
	
	scanf("%d",&x);
	
	y = x & 1 ; 

    printf("Least Significant Bit of %d is set (%d)",x,y);
		
    return 0;	
	
}