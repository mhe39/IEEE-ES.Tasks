#include<stdio.h>
#include<stdlib.h>

int main()
{
float x,y,z ;	
	
printf("Enter first side:");

scanf("%f",&x);

printf("Enter second side:");

scanf("%f",&y);

printf("Enter third side:");

scanf("%f",&z);


if((x>0) && (y>0) && (z>0))
{	
if ((x==y)&&(y==z))
{
	printf("Triangle is equilateral triangle");
}
else if ((x==y)||(y==z)||(x==z))
{
	printf("Triangle is isosceles triangle");
}
else 
{
	printf("Triangle is scalene triangle");
}

}


else
{
	printf("This triangle is not valid");
}
return 0 ; 
}