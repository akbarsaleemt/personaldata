#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
void handler(void)
{
    static int count=0;
    count++;
    printf("count=%d\n",count);
}

void main()
{
  pthread_t t[100000];
    int ret,i=0;
        while(1)
        {
         
          ret=pthread_create(&t[i],NULL,handler,NULL);
              if(ret)
                exit(0);
        //  printf("i=%d\n",i);
          i++;

        }
}
