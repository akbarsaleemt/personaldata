#include"header.h"
queue_t *dequeue(queue_t *frnt){
    queue_t *temp;
    if(frnt==rear){
        printf("queue is empty\n");
        return NULL;
    }
    else{
      temp=frnt;
      frnt=frnt->next;
      printf(" data out from queue is %d\n",temp->data);
      free(temp);
      return frnt;
    }
}
