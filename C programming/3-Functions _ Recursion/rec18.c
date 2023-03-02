#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fact(int num);




int main()
{
    int x,fac;
    
    
    printf("Enter any number: ");
    scanf("%d", &x);
    
    
	fac=fact(x) ;
	
	
    printf("frctorial of %d is %d", x,fac);
    
    return 0;
}



int fact(int num)
{
   
   if (num == 1)
   {
	   
	   return 1;
   }   
   

    return ((num ) * fact(num-1));
}