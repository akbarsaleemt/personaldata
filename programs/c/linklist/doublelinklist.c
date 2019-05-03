#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int data;
  struct node *next;
  struct node *prev;
}dlist_t;
dlist_t *start;
void addnode(int);
void displaynode(void);
dlist_t *reversenode(dlist_t *);
void main()
{
  addnode(2);
  addnode(3);
  addnode(5);
  addnode(6);
  addnode(8);
  displaynode();
  start=reversenode(start);
  displaynode();
}

void addnode(int x){
    dlist_t *ptr,*temp;
    ptr=(dlist_t *)malloc(sizeof(dlist_t));
    ptr->data=x;
    ptr->next=NULL;
    ptr->prev=NULL;
    if(start==NULL)
      start=ptr;
    else
    {
      temp=start;
        while(temp->next!=NULL)
          temp=temp->next;
        temp->next=ptr;
        ptr->prev=temp;
    }
}
void displaynode()
{
    if(start==NULL)
      return;
    else{
      dlist_t *temp;
      temp=start;
         while(temp!=NULL)
           {
             printf("previs %p of %p has %dand next is %p\n ",temp->prev,temp,temp->data,temp->next);
             temp=temp->next;
           }
    }
}

dlist_t *reversenode(dlist_t *head)
{
  dlist_t *temp,*current;
  if(head==NULL)
    return;
  else{
      current=head;
         while(current!=NULL)
          {
            temp=current->prev;
            current->prev=current->next;
            current->next=temp;
            current=current->prev;
          }
         if(temp!=NULL)
           head=temp->prev;
  }
}



