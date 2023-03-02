#include<stdio.h>
#include<stdlib.h>
int main()
{
int x ;
printf("Enter a number:");

scanf("%d",&x);

if ((x%5==00) && (x%11==0))
{
	printf("Number is divisible by 5 and 11");
}
else if (x%5==0)
{
	printf("Number is divisible by 5");
}
else if(x%11==0)
{
	printf("Number is divisible by 11");
}
else  
{
	printf("Number is not divisible by 5 and 11");
}
return 0 ;
}
 