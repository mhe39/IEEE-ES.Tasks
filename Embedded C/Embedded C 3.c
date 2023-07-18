#include <stdio.h> 
#include"STDTYPE.h"
u32 Add(u32, u32);
u32 Sub (u32,u32);
u32 Mult (u32,u32);
u32 Div (u32,u32);
u32 Fun (u32 (*)(u32,u32),u32,u32);
u32 main()
{
u32 res,x,y,cond ;
scanf("%d %d",&x,&y) ;

printf("1:ADD \n2:SUB \n3:MULT \n4:DIV \n5:All \nELSE:EXIT\n"); 

res = Fun(&Div,3,5);

scanf("%d",&cond) ; 
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
printf("%d\n",res) ;
res = Fun(&Sub,x,y);// SUBTRACTION
printf("%d\n",res) ;
res = Fun(&Mult,x,y);// MULTIPLICATION
printf("%d\n",res) ;
res = Fun(&Div,x,y);// DIVISION

break ;

default:
break;
}



printf("%d",res) ;

return 0;
}

/**********************************************************************************/

u32 Fun(u32(*ptr)(u32,u32),u32 x,u32 y )
{
(*ptr)(x,y);
}


u32 Add(u32 x , u32 y)
{


return x+y ;
}

u32 Sub(u32 x , u32 y)
{


return x-y ;
}

u32 Mult(u32 x , u32 y)
{


return x*y ;
}

u32 Div(u32 x , u32 y)
{


return x/y ;
}