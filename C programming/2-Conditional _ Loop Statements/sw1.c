#include<stdio.h>
#include<stdlib.h>
int main()
{
	
int x ;

printf("Input day number(1-7):");

scanf("%d",&x);

switch(x)
{

case 1 :

printf("saturday");

 break;

case 2 :

printf("sunday");

 break;

case 3 :

printf("monday");
	
 break;
	
case 4 :

printf("tuesday");

 break;
	
case 5 :

printf("wednesday");

 break;
	
case 6 :

printf("thrusday");

 break;
	
case 7 :

printf("friday");

 break;

default :

printf("error");

 break;
}			
return 0;	
}	