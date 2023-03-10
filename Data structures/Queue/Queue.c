#include<stdio.h>
#include"Queue_Fun.h"
#include<stdlib.h>


 void Create_Queue (Queue*pq)
{
pq -> front = NULL ;

pq -> rear = NULL ;

pq -> size = 0 ;

}





 int QueueFull (Queue*pq)
{

return 0 ;
}

 int QueueEmpty (Queue*pq)
{
return pq -> size ;
}




 int Append (Queue_Entry e,Queue*pq)
{
Queue_Node *pn = (Queue_Node*) malloc (sizeof(Queue_Node)) ;

pn-> e = e ;

pn-> next = NULL ; 

if (!pn) // here the pointer pn is NULL which means that the allocation is not successful.
{
    return 0 ;
}
else
{
if(!pq->rear)
{
    pq->front = pn ; 
}
 else
{
    pq->rear->next = pn ;
}
pq->rear= pn;

pq -> size++;
 
return 1 ; 
}


}


 void Serve(Queue_Entry e ,Queue*pq)
{
Queue_Node *pn = (Queue_Node*) malloc (sizeof(Queue_Node))  ;

pn-> e = e ;

pn-> next = pq->front ; 

pq->front = pq->front->next ;

free(pn);

if(!pq->front) // means that front is NULL so Queue is empty then we should assign rear as well to NULL
{
    pq -> rear = NULL ;  
}

pq->size -- ;

}


 void Clear_Queue(Queue*pq)
{
while(pq->front)
{
pq->rear = pq->front->next ; 

free(pq->front);

pq->front = pq->rear; // till rear is NULL ; 

}

pq->size = 0 ;

}

 int Queue_Size(Queue*pq)
{
    return pq->size ;
}



 void Queue_Display(Queue_Entry e)
{

printf("%d\n" ,e);
  
}

void TraverseQueue(Queue*pq,void(*pf)(Queue_Entry))
{
 
for(Queue_Node *pn = pq-> front ; pn!=NULL ; pn = pn->next)
{
    (*pf)(pn->e);
}

}
