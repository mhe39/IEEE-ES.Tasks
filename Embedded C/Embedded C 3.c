#include <stdio.h> 
#include <stdlib.h>
#include<math.h>
#include"STDTYPE.h"
f32 Add(f32, f32);
f32 Sub (f32,f32);
f32 Mult (f32,f32);
f32 Div (f32,f32);
f32 Fun (f32 (*)(f32,f32),f32,f32);

int main()
{
f32 res,x,y;
u32 cond ; 

scanf("%f %f",&x,&y);
fflush(stdin) ;

printf("1:ADD \n2:SUB \n3:MULT \n4:DIV \n5:All \nELSE:EXIT\n"); 

scanf("%d",&cond) ;
fflush(stdin) ;

switch (cond)
{
case 1:
res = Fun(&Add,x,y);// ADDITION
break ;

case 2:
res = Fun(&Sub,x,y);// SUBTRACTION
break ;

case 3:
res = Fun(&Mult,x,y);// MULTIPLICATION
break ;

case 4:
res = Fun(&Div,x,y);// DIVISION
break ;


case 5:
res = Fun(&Add,x,y);// ADDITION
printf("%.3f\n",res) ;
res = Fun(&Sub,x,y);// SUBTRACTION
printf("%.3f\n",res) ;
res = Fun(&Mult,x,y);// MULTIPLICATION
printf("%.3f\n",res) ;
res = Fun(&Div,x,y);// DIVISION

break ;

default:
exit(0);

}



printf("%.3f",res) ;

return 0;
}

/**********************************************************************************/

f32 Fun(f32(*ptr)(f32,f32),f32 x,f32 y )
{
return (*ptr)(x,y);
}


f32 Add(f32 x , f32 y)
{


return x+y ;
}

f32 Sub(f32 x , f32 y)
{


return x-y ;
}

f32 Mult(f32 x , f32 y)
{


return x*y ;
}

f32 Div(f32 x , f32 y)
{
if((x==0 && y==0) || (y==0) )
{
    printf("mathmatical error") ;
    exit(0); 
}

return x/y ;
}