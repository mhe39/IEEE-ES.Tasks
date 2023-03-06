#include <stdio.h>
#include"STDTYPE.h"
#include"Stack_Fun.h"

int main()
{
Stack S;
u64 e  ,x,cond=1; // cond to push or pop a member ....e is a member
Stack_Ctreate (&S);

while(cond!=0)
{

if(isfull (&S))
{
 break;
}
else 
{
printf("Enter the member:");
scanf("%d",&e);
 push(e,&S);

}
scanf("%d",&cond);
}

printf("Pop...?");

scanf("%d",&cond);
while(cond!=0)
{
if(isempty (&S))
{
break;
}
else
{
pop(e,&S);
}
scanf("%d",&cond);
}



 Clear_Stack(&S); 

 Stack_Display(&S);

 x = Stack_Size(&S);
 printf("Size=%d" ,x);


 return 0;
}
