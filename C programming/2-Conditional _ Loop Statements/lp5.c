#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,x;



printf("Input upper limit:");

scanf("%d",&x);

for(i=0;i<=x;i++)
{
if (i%2 != 0)
{	
printf ("%d \n",i)	;

i++;
}
}
	
return 0;	
}