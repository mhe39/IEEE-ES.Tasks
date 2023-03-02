#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int isarm(int x);
void arm (int a,int b);



int isarm(int c)
{
int i, numdigs,last ;
int sum =0 ;
	
i=c ;
	
numdigs = log10(i) + 1 ;	
  
   while (i!=0)
   {
	 last = i %10 ; 
	  
	sum +=pow(last,numdigs) ;
	
	i=i/10;

   }  
	
	
	
    if (c==sum)
	
	{
	
		return 1 ;
		
	}
	
	else
	{
		return 0;
		
	}	
	
}	
	
	
	
	


void arm (int a,int b)
{
printf("the numbers are:");	
while (a<=b)
{	
if(isarm(a))
{
	
	printf("%d,",a);
	
}	

a++;
}	
	
}




int main()
{
int x,y;	
	
printf("Enter the first & second numbers:");\

scanf("%d%d",&x,&y);	
	
arm(x,y);	

return 0;
		
}