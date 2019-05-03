#include<stdio.h>
#include"header.h"
void displaynode_double(linklist_t *tmp)
{
linklist_t *head;
	head=tmp;
  if(tmp==NULL){
	printf("list empty\n");
	return;
	}
  while(tmp->next_link!=head){
    printf("prev_link= %p current is %p data is %d and next_link is %p\n",
                          tmp->prev_link,tmp,tmp->data,tmp->next_link);
    tmp=tmp->next_link;
  }
   printf("prev_link= %p current is %p data is %d and next_link is %p\n",
                          tmp->prev_link,tmp,tmp->data,tmp->next_link);
}

