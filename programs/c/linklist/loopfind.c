#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int data;
  struct node *next_link;
}linklist_t;
linklist_t *start,*rev;
void addnode(void);
void displaynode(linklist_t *);
void loopnode(linklist_t *);
void freelist(linklist_t *head){
  linklist_t *ptr,*temp;
  if(head==NULL)
    printf("list empty\n");
  else{
    ptr=head;
      while(ptr!=NULL){
          temp=ptr;
           printf("freeing %p location\n",temp);
          ptr=ptr->next_link;
          free(temp);
      }
  }
  exit(0);
}
void makeloop(linklist_t *head){
    linklist_t *temp;
    if(head==NULL)
        return;
    temp=head;
    while(temp->next_link!=NULL)
        temp=temp->next_link;
    printf("temp->next_link=%p for loop\n",temp->next_link);
    temp->next_link=head->next_link;
    printf("temp=%p ->data->%d->temp->next_link=%p for loop\n",temp,temp->data,temp->next_link);
}

void main()
{
  int opt;
  while(1){

      printf("enter 1.ADD NODE\n2.DELETE\n 3.DISPLAY\n");
      scanf("%d",&opt);

      switch(opt)
      {
      case 1:
      printf("calling add data to node\n");
      addnode();
      break;
      case 2:
              freelist(start);break;
      case 3:
      printf("calling Display linklist \n");
      displaynode(start);break;
      case 4: makeloop(start);
              loopnode(start);
		          printf("calling exit\n");
              break;
      default:
      printf("enter correct option\n");
      }
  }
}

void addnode()
{
  linklist_t *ptr,*temp;
  int x;
  printf("enter data\n");
  scanf("%d",&x);
  ptr=(linklist_t *)malloc(sizeof(linklist_t));
  if(ptr==NULL){
    printf("memory error\n");
    exit(-1);
  }
  ptr->data=x;
  ptr->next_link=NULL;
  if(start==NULL){
    start=ptr;
  }
  else{
    temp=start;
    while(temp->next_link!=NULL){
      temp=temp->next_link;
    }
    temp->next_link=ptr;
  }
}
void displaynode(linklist_t *tmp)
{
  
  while(tmp!=NULL){
    printf("data in %p is %d and next_link is %p\n",
                          tmp,tmp->data,tmp->next_link);
    tmp=tmp->next_link;
  }
}


void loopnode(linklist_t *head){
    linklist_t *sptr,*fptr,*prev;
      if(head==NULL)
          return;
      if(head->next_link==NULL){
          printf("only list has single node\n");
          return;
      }
      sptr=head;
      fptr=head;
        while(fptr!=NULL&&fptr->next_link!=NULL&&sptr!=NULL){
            sptr=sptr->next_link;
            prev=fptr->next_link;
            fptr=fptr->next_link->next_link;
            if(fptr==sptr){
                printf("loop at prev->next=%p->next=%p\n",prev->next_link,prev->next_link->next_link);
                prev->next_link->next_link=NULL;
                printf("prev=%p and link=%p and link is %p\n",prev,prev->next_link,prev->next_link->next_link);
                break;
            }
        }
}



