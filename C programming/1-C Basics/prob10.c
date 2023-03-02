#include<stdio.h>
int main()
{
	int x,d,w,y;
/*
x for the number of days
w for the number of	weeks
y for the number of years
d for the number of days left
*/
	printf("Enter days:");
	
	scanf("%d",&x);
	
	y = x/365;
	
	w = (x-(y*365))/7;

	d= x -((y*365)+(w*7));
	
	printf("%d days = %d year/s, %d week/s and %d day/s",x,y,w,d);
	
	
	return 0 ;
	
	
	
	
	
	
	
	
	
}