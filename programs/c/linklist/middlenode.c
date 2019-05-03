#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int data;
  struct node *next_link;
}linklist_t;
linklist_t *start,*rev;
void addnode(void);
void displaynode(linklist_t *);
void middlenode(linklist_t *);
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
      case 3:
      printf("calling Display linklist \n");
      displaynode(start);break;
      case 4: middlenode(start);
		          printf("calling exit\n");
              freelist(start);
              exit(0);
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


void middlenode(linklist_t *head){
    linklist_t *sptr,*fptr;
      if(head==NULL)
          return;
      if(head->next_link==NULL){
          printf("only list has single node\n");
          return;
      }
      sptr=head->next_link;
      fptr=sptr->next_link->next_link;
        while(fptr!=NULL&&fptr->next_link!=NULL){
            sptr=sptr->next_link;
            fptr=fptr->next_link->next_link;
        }
        printf("middlenoe is at %p and data is %d\n",sptr,sptr->data);
}



