#include<stdio.h>
#include<math.h>
int main()
{
	float sub1,sub2,sub3,sub4,sub5,tot,avr,per;
	
	printf("Enter marks of five subjects:");
	
	scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);
	
    tot = sub1+sub2+sub3+sub4+sub5;
	
	avr=tot/5;
	
	per= (tot/500)*100 ;
	
	printf("Total = %.2f\n",tot);
	
	printf("Average = %.2f\n",avr);
	
	printf("Percentage = %.2f",per);
	
	
	return 0 ;
	
	
	
	
	
}