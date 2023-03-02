#include<stdio.h>
#include<stdlib.h>
int main()
{
int x,pow,i,y;

y=1;

printf("Enter number and exponent:");

scanf("%d%d",&x,&pow);	
	
for(i=1;i<=pow;i++)
{
	
y*=x;	

}	
	
printf("result=%d",y);	
	
	
	
	
	
	
return 0;	
}