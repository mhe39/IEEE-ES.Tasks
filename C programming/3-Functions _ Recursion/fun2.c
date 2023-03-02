#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi  3.141592
float dim(float x)
{
	
float d = 2 * x ;
	
return d ;	
}

float Circ(float x)
{
	
float circ = 2 * pi * x ;
 	
return circ ;	
	
}

float Area(float x)
{
	
float area =  pi * x * x ;
 	
return area ;	
	
}



int main()
{	

float x,d,area,circ;
 
printf("Enter the radius: ");

fflush(stdout);

scanf("%f",&x);	

fflush(stdout);

d = dim(x);

circ = Circ(x);

area = Area(x);

printf("Diameter = %.2f units \n Circumference = %.2f units\n Area = %.2f sq. units",d,circ,area);

return 0 ;
 	
}