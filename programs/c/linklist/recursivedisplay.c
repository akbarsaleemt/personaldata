#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int data;
  struct node *next_link;
}linklist_t;
linklist_t *start,*rev;
void addnode(void);
void displaynode(linklist_t *);
linklist_t *recursiveReverseLL(linklist_t *list);
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
      case 4:rev=recursiveReverseLL(start); 
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
  if(tmp==NULL)
	return;
  displaynode(tmp->next_link);
  printf("%d-->",tmp->data);
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
  



