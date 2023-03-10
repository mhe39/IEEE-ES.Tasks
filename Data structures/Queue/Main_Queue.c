#include <stdio.h>
#include"Queue_Fun.h"
#include<stdlib.h>
int main()
{
Queue q;
Queue_Entry x,e,cond= 1; 
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

Serve(e,&q);

TraverseQueue (&q,&Queue_Display);




x = Queue_Size(&q);
printf("Size=%d" ,x);


 return 0;
}