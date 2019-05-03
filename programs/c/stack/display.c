#include"header.h"
void display(stack_t * top3)
{
    stack_t *dptr;
      if(top3==NULL){
        printf("stack empty\n");
        return;
      }
      dptr=top3;
        while(dptr!=NULL){
          printf("data=%c\n",dptr->data);
          dptr=dptr->next;
        }
}

