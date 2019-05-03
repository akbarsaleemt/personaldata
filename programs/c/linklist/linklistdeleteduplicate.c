#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int data;
  struct node *next_link;
}linklist_t;
linklist_t *start,*rev;
void addnode(void);
void displaynode(linklist_t *);
linklist_t *deleteduplicate(linklist_t *);
void main()
{
  int opt;
  while(1){

      printf("enter 1.ADD NODE\n2.DELETE\n 3.DISPLAY\n4.DELETE DUPLICATE\n");
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
      case 4:rev=deleteduplicate(start); 
         		 displaynode(rev);printf("calling delete duplicate\n");
             break; // exit(0);
      case 5: exit(0);
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


linklist_t *recursiveReverseLL(linklist_t *list)
{
    linklist_t *revHead;
    if (list == NULL || list->next_link == NULL)
    {
        return list;
    }

    revHead = recursiveReverseLL(list->next_link);
    list->next_link->next_link = list;
    list->next_link = NULL; 

    return revHead;
}
 /* 
linklist_t *deleteduplicate(linklist_t *temp1){
  linklist_t *temp;
  if(temp1==NULL)
    return NULL;
  if(temp1->next_link==NULL)
    return temp1;
      if(temp1->data==temp1->next_link->data){
        temp=temp1->next_link;
        printf("data:%d is matching at %p location\n",temp->data,temp);
        temp1->next_link=temp->next_link;
        free(temp);
        return deleteduplicate(temp1);
        }
      else{
      temp1->next_link=deleteduplicate(temp1->next_link);
      return temp1;
      }
 
}
*/
linklist_t *deleteduplicate(linklist_t *head){
  linklist_t *temp,*temp2,*temp1;
  temp1=head;
  if(temp1==NULL)
    return NULL;
  if(temp1->next_link==NULL)
    return temp1;
	while((temp1!=NULL)&&(temp1->next_link!=NULL)){
        temp2=temp1->next_link;
        while((temp2!=NULL)&&(temp2->next_link!=NULL)){
      if(temp1->data==temp2->data){
        temp=temp1->next_link;
        printf("data:%d is matching at %p location\n",temp->data,temp);
        temp1->next_link=temp->next_link;
        free(temp);
        }
      temp2=temp2->next_link;
        }
        temp1=temp1->next_link;
  }
 
}


