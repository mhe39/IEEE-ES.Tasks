#include<stdio.h>
#include <stdlib.h>
#include "STDTYPE.h"

typedef  f32 (*funptr[4])(f32,f32); 
f32 Add (f32,f32) ; 
f32 Sub (f32,f32) ; 
f32 Mult (f32,f32) ; 
f32 Div (f32 x ,f32 y);

f32 fun (funptr,f32,f32);

int main ()
{
f32 res,x,y ;


scanf("%f %f",&x,&y) ;
fflush (stdin) ;
funptr ptr = {Add,Sub,Mult,Div};


res = fun (ptr,x,y);

printf("%.2f",res);
return 0 ;
}

f32 fun (funptr ptr1 ,f32 x, f32 y)
{
u32 cond ;
f32 res ;
printf("1:ADD \n2:SUB \n3:MULT \n4:DIV \n5:All \nELSE:EXIT\n"); 


scanf("%d",&cond) ; 
fflush (stdin) ;
switch (cond)
{
case 1:
res  = (ptr1[0])(x,y) ;// ADDITION
return res;

break ;

case 2:
res  = (ptr1[1])(x,y) ;// SUBTRACTION
return res;

break ;

case 3:
res  = (ptr1[2])(x,y);// MULTIPLICATION
return res;

break ;

case 4:
res  = (ptr1[3])(x,y);// DIVISION
return res;

break ;


case 5:
res  = (ptr1[0])(x,y) ;// ADDITION
printf("%.2f\n",res) ;
res  = (ptr1[1])(x,y) ;// SUBTRACTION
printf("%.2f\n",res) ;
res  = (ptr1[2])(x,y) ;// MULTIPLICATION
printf("%.2f\n",res) ;
res  = (ptr1[3])(x,y);// DIVISION
return res;

break ;

default:
exit(0);
break;




}
}







/***********************/
f32 Add (f32 x,f32 y) 
{

return x+y ;
}

f32 Sub (f32 x , f32 y) 
{
return x-y ;
}

f32 Mult (f32 x , f32 y) 
{
return x*y ;
}

f32 Div (f32 x ,f32 y)
{
    return x/y ;
}
