
#include"header.h"
void main()
{
  int opt,data;
  linklist_t *ptr;
  while(1){

    printf("enter 1.ADD NODE\n2.DISPLAY\n3.EXIT\n4.DOUBLELIST\n5.FORWARD\n6. BACKWARD\n7.REVERSE\n8.DELETE FIRST\n9.DELETE POSITION");
    scanf("%d",&opt);

    switch(opt)
    {
      case 1:
        printf("enter data to create node\n");
	scanf("%d",&data);
         create_node(start,data);
        break;
      case 2:
        printf("calling Display linklist \n");
        displaynode(start);
        break;
      case 3:
	free(start);exit(0);
      case 4:	doublelinkedlist(start);
		displaynode_double(start);break;
      case 5:displaynode_double(start);
		break;
      case 6:displaynode_back(start->prev_link,start);
		break;//free(start);exit(0);
      case 7:ptr=reverse(start);
	     displaynode(ptr);break;
     case 8:start=delete_begin(start);
	     displaynode(start);break;
     case 9:start=delete_position(start);displaynode(start);break;
      default:
        printf("enter correct option\n");
    }
  }
}
