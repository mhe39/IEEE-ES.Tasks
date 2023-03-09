#include <stdio.h>
#include"STDTYPE.h"
#include"Queue_Fun.h"

int main()
{
Queue q;
Queue_Entry x,e,cond= 1 ; 
Create_Queue (&q);

while (cond)
{
printf("Enter a member:");

scanf("%d",&e);

if(!(Append(e,&q)))
{
  printf("Error") ;  
}

printf("Enter a cond:");
scanf("%d",&cond) ;

}


TraverseQueue (&q,&Queue_Display);

x = Queue_Size(&q);
printf("Size=%d" ,x);


 return 0;
}