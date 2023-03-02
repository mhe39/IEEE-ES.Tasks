#include<stdio.h>
#include<stdlib.h>
int main()
{
int mon ; 

printf("Enter a month:");

scanf("%d",&mon);

if ((mon==4) || (mon==6) || (mon==9) || (mon==11)) 
{
	printf("it contains 30 days");
	
}
else if (mon==2)
{
	printf("it contains 28 or 29 days");
	
}

else if ((mon>0) && (mon<13))
{
	printf("it contains 31 days");	
}
else 
{
	printf("error");
}

return 0;
}