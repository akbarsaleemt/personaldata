#include"header.h"

linklist_t *delete_position(linklist_t *head)
    { 
      linklist_t *temp,*prev;
      if(head==NULL){
        printf("list null\n");
        return NULL;
      }
      int pos,count=0;
      printf("enetr position to delete node\n");
      scanf("%d",&pos);
      temp=head;
      if(pos==0){
      head=head->next_link;
      free(temp);
      return head;
      }
            while(temp->next_link!=NULL){
                prev=temp;count++;
                temp=temp->next_link;
                     if(count==pos){
                       prev->next_link=temp->next_link;
                       free(temp);
                       return head;
                     }
              }
                         if(pos== count){
                           prev->next_link=NULL;
                           free(temp);
                         }
      return head;
    }
