#include"header.h"
char pop(stack_t *top2)
{
  stack_t *temp;
  char ch;
      if(top2==NULL){
        printf("stack empty\n");
        return '\0';
      }
      temp=top2;
      ch=top2->data;
      top2=top2->next;
      free(temp);
      return ch;
}

