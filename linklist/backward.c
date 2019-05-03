#include<stdio.h>
#include"header.h"
void displaynode_back(linklist_t *head,linklist_t *head2)
{
  linklist_t *tmp,*tmp2;
 /**********************************/
	tmp=head;   
	while(tmp!=head2){
	printf("temp->data=%d\n",tmp->data);
	tmp=tmp->prev_link;
	}
     printf("temp->data=%d\n",head2->data);
 
}

