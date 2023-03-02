#include<stdio.h>
#include<stdlib.h>
int main()
{
 
float x,y,HRA ,DA ;
printf("Enter the basic salary:");

scanf("%f",&x);

if (x<=10000)
{
HRA = x * .2 ;	

DA = x * .8 ;	

y= x+DA+HRA ;
	

}	
else if ((x>10000) && (x<20000))
{
HRA = x * .25 ;	

DA = x * .9 ;	
	
y= x+DA+HRA ;

	
}	
else if (x>20000)	
{
HRA = x * .3 ;	

DA = x * .95 ;	
	
y= x+DA+HRA ;	

}

printf("Gross salary=%.2f",y);

return 0 ;	
}