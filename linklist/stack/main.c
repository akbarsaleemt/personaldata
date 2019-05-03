#include"header.h"
 void main()
    {
      int data,opt;
      while(1){
        printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
        scanf("%d",&opt);
        switch(opt)
          {
            case 1:printf("enter data to push\n");
                   scanf("%d",&data);
                   start=push(start,data);break;
            case 2:start=pop(start);displaystack(start);break;
            case 3:displaystack(start);break;
            case 4:free(start);exit(0);
            default:printf("enter correct option\n");
          }
      }
    }
