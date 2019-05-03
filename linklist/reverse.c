#include"header.h"

linklist_t *reverse(linklist_t *head){
    linklist_t *ptr1,*ptr2,*ptr3;
    if(start==NULL)
      {
        printf("list not exist\n");
        return NULL;
      }
    if(start->next_link==NULL)
      return start;
    ptr1=start;
    ptr2=start->next_link;
    ptr3=ptr2->next_link;
    ptr1->next_link=NULL;
    ptr2->next_link=ptr1;
    while(ptr3!=NULL){
      ptr1=ptr2;
      ptr2=ptr3;
      ptr3=ptr3->next_link;
      ptr2->next_link=ptr1;
    }
   // start=ptr2;
    return ptr2;
}



