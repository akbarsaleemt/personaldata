#include"header.h"
queue_t *enqueue(queue_t *head,int d){
  queue_t *ptr,*temp;
  ptr=(queue_t *)malloc(sizeof(queue_t));
  if(ptr==NULL){
    return -1;
  }
  ptr->data=d;
  ptr->next=rear;
  if(head==NULL){
      head=ptr;
      return head;
  }
  else{
     temp=head;
      while(temp->next!=rear)
        temp=temp->next;
      temp->next=ptr;
      return head;
  }
}

