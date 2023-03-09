#ifndef Queue_Fun_H_
#define Queue_Fun_H_
#define Max_Queue 5
#include"STDTYPE.h" 


typedef int Queue_Entry;


typedef struct queue_node
{
Queue_Entry e ;
 
struct queue_node * next ; 

}Queue_Node;



typedef  struct queue {
    Queue_Node* front ;
    Queue_Node* rear ; 
    int size ;
}Queue ;

void Create_Queue (Queue*);

int QueueEmpty (Queue*) ;

int QueueFull (Queue*) ; 

int Append (Queue_Entry,Queue*);

void Serve(Queue_Entry*,Queue*);

void Clear_Queue(Queue*) ; 

int Queue_Size(Queue*) ; 

void Queue_Display(Queue_Entry);

void TraverseQueue(Queue*,void(*)(Queue_Entry));

#endif /* Stack_H_ */