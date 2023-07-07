#include <stdio.h>
#include "STDTYPE.h"
void fun (u32*,u32*) ; 

int main()
{
u32 reg,bit ; 

scanf("%d %d",&reg,&bit) ; 
fflush(stdin); 

fun(&reg,&bit) ;

printf("%d",reg) ; 

return 0 ; 
}


void fun (u32*ptr1 , u32*ptr2 )
{

u32 cond ;

printf("1:SET \n 2:CLEAR \n 3:TOGGLE \n 4:ALL \n ELSE:EXIT\n"); 

scanf("%d",&cond) ;
fflush(stdin) ; 
switch (cond)
{
case 1:
*ptr1 = *(ptr1) | (1<<*(ptr2)); // SET
break ;

case 2 :
*ptr1 = *(ptr1) & (~(1<<*(ptr2))); // CLEAR
break ;

case 3 :
*ptr1 = *(ptr1) ^ (1<<*(ptr2)); // TOGGLE
break;

case 4 :
*ptr1 = *(ptr1) | (1<<*(ptr2)); // SET

*ptr1 = *(ptr1) & (~(1<<*(ptr2))); // CLEAR

*ptr1 = *(ptr1) ^ (1<<*(ptr2)); // TOGGLE

break;

default:
break;

}
}