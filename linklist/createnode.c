#include<stdio.h>
#include<stdlib.h>
#include"header.h"
void create_node(linklist_t *head,int x)
{
  linklist_t *ptr,*temp;
 
  ptr=(linklist_t *)malloc(sizeof(linklist_t));
  if(ptr==NULL){
    printf("memory error\n");
    exit(-1);
  }
  ptr->data=x;
  ptr->next_link=NULL;
  if(head==NULL){
    start=ptr;
  }
  else{
    temp=head;
    while(temp->next_link!=NULL){
      temp=temp->next_link;
    }
    temp->next_link=ptr;
  }
}
