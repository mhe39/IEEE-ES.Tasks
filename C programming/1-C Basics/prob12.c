#include<stdio.h>
#include<math.h>
int main()
{
	float x ,y ;
	
	// x is the number 
	// y is the root 
	
	printf("Enter any number:");
	
	scanf("%f",&x);
	
	
	y = sqrt(x) ;
	
	printf("Square root of %.2lf = %.2lf",x,y);
	
	return 0;
	
}
