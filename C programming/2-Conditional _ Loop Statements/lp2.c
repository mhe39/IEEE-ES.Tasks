#include<stdio.h>
#include<stdlib.h>
int main()
{
int x ,y,sum ;

x=0;
sum=0;

printf("Input upper limit:");

scanf("%d",&y);

while (x<=y)
{
	
sum+=x;	

x++;
}

printf ("the sum = %d",sum)	;

	
return 0;	
}