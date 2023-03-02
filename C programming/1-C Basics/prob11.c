#include<stdio.h>
#include<math.h>

int main()
{
 float x,y,z;
/*
x>>>base
y>>>exponent
z>>>result
*/
printf("Enter base:");

scanf("%f",&x);

printf("Enter exponent:");

scanf("%f",&y);

z = pow(x,y);

printf("%.2lf ^ %.2lf = %.2lf",x,y,z);



	
	
	
	
	
	
	
}