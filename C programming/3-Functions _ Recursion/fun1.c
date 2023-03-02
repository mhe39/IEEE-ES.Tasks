#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float fun(float x)
{
	
float cube = pow(x,3);
	
return cube ;	
}



int main()
{	
float x,cube;
 
printf("Enter the number: ");

fflush(stdout);

scanf("%f",&x);	

fflush(stdout);

cube = fun(x);

printf("The cube of %.4f =%.4f",x,cube);

return 0 ;
 	
}