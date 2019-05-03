#include"header.h"
stack_t *push(stack_t *top1,char ch)
{
  stack_t *ptr;
  ptr=(stack_t *)malloc(sizeof(stack_t));
      if(ptr==NULL){
          printf("memory error\n");
          return NULL;
      }
    ptr->data=ch;
    ptr->next=NULL;
      if(top1==NULL)
      {
        top1=ptr;
      }
      else
      {
        ptr->next=top1;
        top1=ptr;
      }
      return top1;
}



