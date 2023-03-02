#include<stdio.h>
#include<stdlib.h>

int maximum(int x,int y)
{
if(x>y)
{
	return x;
}	
else 
{
	return y;
}	
	
	
	
}

int minimum(int x,int y)
{
	
if(x>y)
{
	return y;
}	
else 
{
	return x;
}	
	
	
	
	
	
	
}



int main()
{	
int x,y,min,max;

printf("Enter the two numbers:");

scanf("%d%d",&x,&y);

max = maximum(x,y);

min = minimum(x,y);

printf("Maximum = %d \n Minimum = %d",max,min);


return 0 ;
 	
}