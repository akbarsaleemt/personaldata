#include"header.h"
void main()
{
  char buf;
 top= push(top,'A');
  top=push(top,'B');
  top=push(top,'C');
  display(top);
    
        buf=pop(top);
        printf("buf=%c\n",buf);
  display(top);
}

