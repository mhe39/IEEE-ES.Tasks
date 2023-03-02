#include<stdio.h>
int main()
{
	float x,y,len;
	//len is the lentgh in centimeters
	// x&y represent the length in meters & kilometers respectively
	
	printf("Enter the length in centimeters:");
	
	scanf("%f",&len);
	
	x= len/100;
	
	y= x/1000;
	
	printf("the length in meters=%f m\n",x);
	
	printf("the length in kilometers=%f km",y);
	
	return 0 ;
}