#include"header.h"
stack_t* pop(stack_t *top)
    {
      stack_t *temp;
          if(top==NULL){
            printf("stack empty\n");
            return NULL;
           }
          temp=top;
          top=top->next;
          free(temp);
	return top;
    }

