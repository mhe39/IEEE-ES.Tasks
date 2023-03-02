#include<stdio.h>
#include<stdlib.h>

int main()
{
	
float a,b,c,d,e,sum,per;
	
printf("Input marks of five subjects:");

scanf ("%f%f%f%f%f",&a,&b,&c,&d,&e);

sum = a+b+c+d+e ;
	
per = (sum/500)*100;

if (per>=90)		
{	
printf("Percentage=%.2f\n",per);
printf("Grade A");
}
else if ((per>=80) && (per <90))	
{
printf("Percentage=%.2f\n",per);	
printf("Grade B");	
}
else if ((per>=70) && (per <80))
{
printf("Percentage=%.2f\n",per);	
printf("Grade C");	
}	
else if ((per>=60) && (per <70))
{
printf("Percentage=%.2f\n",per);	
printf("Grade D");	
}	
else if ((per>=40) && (per <60))
{
printf("Percentage=%.2f\n",per);	
printf("Grade E");	
}		
else if (per <40)	
{
printf("Percentage=%.2f\n",per);	
printf("Grade F");	
}		
	
	
	
	
	
	
	
	
return 0 ;
}