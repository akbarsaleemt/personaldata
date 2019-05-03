#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#include<signal.h>
#include<stdlib.h>
int x,count,td1,td2;
sigset_t set;
  pthread_t t1,t2;
int sig;
void handler(int sign){
  x=1;
  printf("signal handler invoked\n");
}
void *thread1(){
  printf("thread1\n");
  td1=1;
  while(1){
    sigwait(&set,&sig);
    count++;
  if(x==1){
  printf("thread1 closed\n");
  pthread_kill(t2,SIGUSR1);
  break;
  }
  printf("one\n");
  pthread_kill(t2,SIGUSR1);
  }
}

void *thread2(){
  printf("thread2\n");
  td2=1;
  while(1){
    sigwait(&set,&sig);
  if(x==1){
  printf("thread2 closed\n");
  pthread_kill(t1,SIGUSR1);
  break;
  }
  printf("two\n");
  pthread_kill(t1,SIGUSR1);
  }
}

void main()
{
  int ret;
  sigemptyset(&set);
  sigaddset(&set,SIGUSR1);
  signal(SIGINT,handler);
  sigprocmask(SIG_BLOCK,&set,NULL);
  printf("in main before threads x=%d\n",x);
  ret=pthread_create(&t1,NULL,thread1,NULL);
  if(ret){
    printf("thread error\n");
    return;
  }
  ret=pthread_create(&t2,NULL,thread2,NULL);
  if(ret){
    printf("thread error\n");
    return;
  }
  while(td1!=1&&td2!=1);
  printf("in main unblock sem1 to td1\n");
getchar();
  pthread_kill(t1,SIGUSR1);
  ret=pthread_join(t1,NULL);
  if(ret){
    printf("thread error\n");
    return;
  }
  ret=pthread_join(t2,NULL);
  if(ret){
    printf("thread error\n");
    return;
  }
  printf("in main after threads count=%d\n",count);
}




