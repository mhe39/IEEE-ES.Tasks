#include<stdio.h>
int main()
{
	int x,y,n;

	printf("Input number:");
	
	scanf("%d",&x);
	
	/* we use here sizeof() fun to get the number of bytes
	then we multiply it by 8 to get the number of bits to represent the number*/
	
	n = sizeof(int)* 8;
	
	y = (x>>(n-1))& 1;
	
	printf("Most Significant Bit (MSB) of %d is (%d)",x,y);
	
	return 0;
	
	
	

}