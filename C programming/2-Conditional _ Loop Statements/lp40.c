#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int x,dec,y;

dec=0;

y=0;

printf("Enter number :");

scanf("%d",&x);	
	
while(x!=0)
{
	
dec+=(x%10)*pow(2,y);
	
x/=10;	

y++;
	
}	


printf("Decimal number =%d",dec);
	
	
	
	
return 0;	
}