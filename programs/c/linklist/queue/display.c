#include"header.h"
void display(queue_t *frntt)
{
    queue_t * temp;
    if(frntt==rear){
        printf("queue is empty\n");
    }
    else{
      temp=frntt;
        while(temp!=rear){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}

