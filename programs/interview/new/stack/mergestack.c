#include"header.h"
stack_t* mergefunc(stack_t *stak1,stack_t *stak2){
  stack_t *temp;
  temp=stak2;
  while(temp->next!=NULL){
  temp=temp->next;
  }
  temp->next=stak1;
  return stak2;
}
stack_t* mergestacks(stack_t *stack1,stack_t *stack2){
  if(stack1==NULL&&stack2==NULL){
    printf("two stacks are empty\n");
    return NULL;
  }
  else if(stack1==NULL){
      if(stack2!=NULL)
        return stack2;
  }
  else if(stack2==NULL){
      if(stack1!=NULL)
        return stack1;
  }
  else
   stack1= mergefunc(stack1,stack2);
  return stack1;
}



