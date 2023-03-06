#ifndef Stack_Fun_H_
#define Stack_Fun_H_
#define Max_Stack 5


typedef  struct stack {
    u64 top;
   u64 arr[Max_Stack]; 
}Stack ;

void Stack_Ctreate (Stack*);

u64 isempty (Stack*);

u64 isfull (Stack*);

u64 push (u64,Stack*);

u64 pop(u64 ,Stack*);

void Clear_Stack(Stack*);

u64 Stack_Size(Stack*);

void Stack_Display(Stack*);

#endif /* Stack_H_ */