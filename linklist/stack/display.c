#include"header.h"
void displaystack(stack_t *top)
{
     if(top==NULL)
         {
           printf("stack empty\n");
           return;
         }
     while(top!=NULL)
     {
       printf("%d\t",top->data);
       top=top->next;
     }
     printf("\n");
}

