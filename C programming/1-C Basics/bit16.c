#include <stdio.h>
#include <stdlib.h>
int main()
{
	 int x ;
	printf("Input number:");
	scanf("%d",&x);
	
	if ((x & 1) == 0)
	{
		printf("%d is even",x);
	}
	else 
	{
		printf("%d is odd",x);
	}
	
	
	return 0 ;
}