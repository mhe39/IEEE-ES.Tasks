#include<stdio.h>
#include<stdlib.h>
int main()
{
int num,product;

product = 1;

printf("Input number:");

scanf("%d",&num);



while(num!=0)	
{

product = product * (num % 10);

num /= 10;

}


printf("product of digits is:%d",product);
return 0;	
}