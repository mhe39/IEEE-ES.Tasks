#include<stdio.h>
#include"STDTYPE.h"
#include"Stack_Fun.h"

 void Stack_Ctreate (Stack*PS)
{

PS-> top = 0 ; 

}





 u64 isempty (Stack*PS)
{

if(PS-> top == 0 ) 
{
return 1 ;
}
else
{
    return 0;
}

}

 u64 isfull (Stack*ps)
{

if(ps-> top == Max_Stack ) 
{
return 1 ;
}
else
{
    return 0;
}
}

 u64 push (u64 e,Stack*ps)
{
if((ps -> top )< Max_Stack )
{ 
ps->arr[ps->top]=e ;
ps->top++;
return 1 ;
}
else
{
 return 0;
}

}

 u64 pop(u64 e ,Stack*ps)
{
if(ps-> top == 0 )
{ 

return 0;
}
else
{
    u64 e=ps->arr[--ps->top];
    return 1;
}
}

 void Clear_Stack(Stack*ps)
{
ps->top=0;
}

 u64 Stack_Size(Stack*ps)
{
    return ps->top ;
}

 void Stack_Display(Stack*ps)
{
    printf(">>>>>\n");
 for(u64 i =0;i< ps->top;i++)
{
    printf("%d\n" ,ps->arr[i]);
}
   printf("top=%d..." ,ps->top);
}
