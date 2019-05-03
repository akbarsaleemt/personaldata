#include"header.h"
  void doublelinkedlist(linklist_t *head){
        linklist_t *temp;
        temp=head;
        if(head==NULL){
          printf("list empty\n");
          exit(-2);
        }
        while(temp->next_link!=NULL){
          temp->next_link->prev_link=temp;
          temp=temp->next_link;
        }
	temp->next_link=head;
        head->prev_link=temp;
  }
