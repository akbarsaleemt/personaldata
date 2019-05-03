#include"header.h"

stack_t* push(stack_t *top,int x)
{
  stack_t *ptr,*temp;
  ptr=(stack_t *)malloc(sizeof(stack_t));
  if(ptr==NULL){
    printf("memory error\n");
    return NULL;
  }
  ptr->data=x;
  ptr->next=NULL;
  if(top==NULL)
    top=ptr;
  else{
    ptr->next=top;
    top=ptr;
  }
	return top;
}
