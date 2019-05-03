#include"header.h"
void main()
{
  int ch,x;
  while(1){
      printf("enter choice\n");
      printf("1:ENQUEUE\n2:DEQUEUE\n3:DISPLAY:");
      scanf("%d",&ch);
        switch(ch)
         {
            case 1:printf("calling ENQUEUE\n enter data to queue:");
                   scanf("%d",&x);
                   front=enqueue(front,x);
                   break;
            case 2: printf("calling DEQUEUE\n");
                    front=dequeue(front);
                    display(front);
                    break;
            case 3:printf("calling DISPLAY function\n");
                   display(front);
                   break;
            case 4: printf("closing application\n");
                    exit(0);

            default: printf("choose correct option");
                     break;
         }
  }
}


