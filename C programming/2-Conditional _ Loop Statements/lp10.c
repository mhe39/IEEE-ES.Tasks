#include<stdio.h>
#include<stdlib.h>
int main()
{
int x,count;

count = 0;

printf("Input number:");

scanf("%d",&x);



while(x!=0)	
{
count++;

x/=10;
}


printf("the number of digits is :%d",count);
return 0;	
}