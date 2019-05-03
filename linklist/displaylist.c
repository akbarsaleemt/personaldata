#include<stdio.h>
#include"header.h"
void displaynode(linklist_t *tmp)
{
  
  while(tmp!=NULL){
    printf("data in %p is %d and next_link is %p\n",
                          tmp,tmp->data,tmp->next_link);
    tmp=tmp->next_link;
  }
}

