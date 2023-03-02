#include<stdio.h>
#include<stdlib.h>

int main()
{
float x,y,z ;	
	
printf("Enter first angle:");

scanf("%f",&x);

printf("Enter second angle:");

scanf("%f",&y);

printf("Enter third angle:");

scanf("%f",&z);

float sum = x+y+z;

if (sum==180)
		
{

if((x>0) && (y>0) && (z>0))
{
printf("This triangle is valid");		
}
else 
{
printf("This triangle is not valid");	
}

	
}
else
{
	printf("This triangle is not valid");	
}

return 0 ; 
}