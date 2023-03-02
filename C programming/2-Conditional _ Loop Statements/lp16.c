#include<stdio.h>
#include<stdlib.h>
int main()
{
int num,reverse;

reverse = 0;

printf("Input number:");

scanf("%d",&num);



while(num!=0)	
{

reverse = (reverse * 10) + (num % 10);
 
num /= 10 ;

}


printf("reverse of digits is: %d",reverse);
return 0;	
}