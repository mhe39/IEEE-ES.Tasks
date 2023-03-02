#include<stdio.h>
int main()
{
	float x , temp ;
	// x is the temperature in celsius 
	
	printf("Enter the temperature in Celsius:");
	
	scanf("%f",&x);
	
	temp = ((x*9)/5) +32;
	
	printf("Temperature in Fahrenheit=%f F",temp);
	
	
	return 0 ;
}

