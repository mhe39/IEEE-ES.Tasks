#include <stdio.h> 
#include"STDTYPE.h"
#define max 100 

u32 Fun (u32 *,u32) ;

int main ()
{

 u32 arr[max];

 u32 n,sum ; // Number of elements & their sum

 scanf("%d",&n) ;


 for(u32 i =0 ; i<n;i++)
 {
    scanf("%d",&arr[i]);
 }

sum = Fun(arr,n) ;

printf("Sum of the elements of the array =%d",sum) ;

return 0;
}



u32 Fun (u32 *ptr,u32 n)
{
u32 x=0,sum=0 ;
while (x<n)
{
sum+=*(ptr+x) ;

x++ ; 

}

return sum ;
}
