#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void fun(int a,int b)
{




if (a>b)
{
	return ;
}

printf("%d,",a);

fun(a+2,b);	
}	



int main()
{
int x,y;	
	
printf("Enter the numbers:");

scanf("%d%d",&x,&y);	

if (x%2==0)
{	
printf("the even numbers from %d to %d :",x,y);
}
else
{	
printf("the odd numbers from %d to %d :",x,y);
}

fun(x,y);



}