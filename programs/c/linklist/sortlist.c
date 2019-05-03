#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int data;
  struct node *next_link;
}linklist_t;
linklist_t *start,*rev;
void addnode(void);
void displaynode(linklist_t *);
linklist_t *sort(linklist_t *list);
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
      case 4:rev=sort(start); 
		displaynode(rev);printf("calling exit\n");
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


linklist_t *sort(linklist_t *list)
{
    linklist_t *temp1,*temp2;
    int temp;
    if (list == NULL || list->next_link == NULL)
    {
        return list;
    }
    temp1=list;
    while(temp1!=NULL){
      temp2=temp1->next_link;
          while(temp2!=NULL){
              if(temp1->data>temp2->data){
                  temp=temp1->data;
                  temp1->data=temp2->data;
                  temp2->data=temp;
              }
              temp2=temp2->next_link;
          }
          temp1=temp1->next_link;
    }
    return list;
}


  



