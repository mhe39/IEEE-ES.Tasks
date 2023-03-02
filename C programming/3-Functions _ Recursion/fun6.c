#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int isPrime(int x)   
{  
    int i;  
   
    for(i=2; i<=x/2; i++)    
    {    
  
      if(x % i == 0)    
        {  
         return 0;  
        }    
    }   
      
    return 1;   
}

void prime(int x, int y)
{
    printf("prime number between %d to %d are: ", x, y);
    
    while(x <= y)
    {
    
       if(isPrime(x))
       {
        printf("%d, ",x);
       }
        
        x++;
    }
}



int main() 
{
int x,y;


	
printf("Enter the upper and lower limit:");

scanf("%d%d",&x,&y);
	
prime(x,y);	

}	
	
