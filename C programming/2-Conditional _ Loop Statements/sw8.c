#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{

float x,y,z ;	
	
char op;	

printf ("enter the numbers and the operation:");

scanf("%f %c %f", &x, &op, &y);

switch (op)
{
case '+' :

z=x+y ;

printf("%.2f + %.2f = %.2f",x,y,z);

break ;	
	
case '-' :

z=x-y ;

printf("%.2f - %.2f = %.2f",x,y,z);

break ;	
	
case '*' :

z=x*y ;

printf("%.2f * %.2f = %.2f",x,y,z);

break ;	
	
case '/' :

z=x/y ;

printf("%.2f / %.2f = %.2f",x,y,z);

break ;	
}		
	
return 0;	
}