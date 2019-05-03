#include"header.h"
#include"header.h"
linklist_t *delete_begin(linklist_t *head)
    { 
      linklist_t *temp;
      if(head==NULL){
        printf("list null\n");
        return NULL;
      }
      temp=head;
      head=head->next_link;
      free(temp);
      return head;
    }
