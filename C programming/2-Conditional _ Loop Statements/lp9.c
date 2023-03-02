#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,x,y,z;

printf("Input numbers:");

scanf("%d%d",&x,&y);



for(i=0;i<=y;i++)
{
	
z = x*i;	
printf ("%d * %d = %d\n",x,i,z);

}	
return 0;	
}