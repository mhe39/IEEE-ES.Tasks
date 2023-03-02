#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int summ(int num);




int main()
{
    int x,sum;
    
    
    printf("Enter any number: ");
    scanf("%d", &x);
    
    
	sum=summ(x) ;
	
	
    printf("sum of %d is %d", x,sum);

    return 0;
}



int summ(int num)
{
   
   if (num == 0)
   {
	   
	   return 0;
   }   
   

    return ((num%10 ) + summ(num/10));
}