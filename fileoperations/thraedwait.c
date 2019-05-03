#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<string.h>
#include<signal.h>
#include<unistd.h>
char buf1[100];
char buf2[100];
  FILE *fp2,*fp;
pthread_t t1,t2,id;
sigset_t signals;
int sig,threadset1=0,threadset2=0;
void *readword1(void *);
void *readword2(void *);
void writetofile(FILE *,char *);
void signal_file_open(){
  id=pthread_self();
  sigemptyset(&signals);
  sigaddset(&signals,SIGUSR1); 
//  sigaddset(&signals,SIGUSR2);       
  sigprocmask(SIG_BLOCK,&signals,NULL);
  fp2=fopen("file2.txt","w+");
  if(fp2==NULL){
    printf("file2 open error..\n");
    exit(-1);
  }
  fp=fopen("file.txt","r");
  if(fp==NULL){
    printf("file open error  \n");
    exit(-2);
  }
}

void thread_create(){
  int ret1, ret2;
  ret1=pthread_create(&t1,NULL,readword1,fp);
  if(ret1){
    printf("pthread_error\n");
    exit(-2);
  }
  ret2=pthread_create(&t2,NULL,readword2,fp);
  if(ret2){
    printf("pthread_error\n");
    exit(-3);
  }
}
int main()
{	
  int ret1, ret2;
  signal_file_open();
  thread_create();
  while(1){
    if((threadset1==1)&&(threadset2==1)){
      printf("main\n");
      pthread_kill(t1,SIGUSR1);
      printf("sending to thread1 signal\n");
      break;
    }
  }
  while(1){
    sigwait(&signals,&sig);
    printf("main\n");
    if(feof(fp))
      exit(0);
    writetofile(fp2,buf1);
    bzero(buf1,100);
    bzero(buf2,100);
    pthread_kill(t1,SIGUSR1);
  }  
  ret1=pthread_join(t1,NULL);
  if(ret1){
    printf("pthread_join error\n");
    exit(-5);
  }
  ret2=pthread_join(t2,NULL);
  fclose(fp);
  fclose(fp2);
}

void *readword1(void *fp1)
{  
  threadset1=1;
  if(feof((FILE *)fp1))
    pthread_exit(0);
  sigwait(&signals,&sig);
  while(1){
    printf("thread 1\n");
    fscanf((FILE *)fp1,"%s",buf1);
    pthread_kill(t2,SIGUSR1);
    sigwait(&signals,&sig);
  }

}
void *readword2(void * fp4)
{	
  threadset2=1;
  char b[]=" ";
  if(feof((void *)fp4))
    pthread_exit(0);
  while(1){
    printf("thread 2\n");
    fscanf((FILE *)fp4,"%s",buf2);
    strcat(buf1,b);
    strcat(buf1,buf2);
    pthread_kill(id,SIGUSR1);
    sigwait(&signals,&sig);
  }
}


void writetofile(FILE *fp3,char *ptr){
  char b[]=" ";
  fprintf(fp3,"%s",ptr);
  fprintf(fp3,"%s",b);
}
