#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<string.h>
#include<semaphore.h>
#include<signal.h>
char *buf;
FILE *fp;
pthread_t t1,t2;
//sigset_t signals;
sem_t sem1,sem2;
void *thread1(char *);
void *thread2(char *);
void reverse(char *);
int compareword(char *);
void main(int argc, char *args[])
  {
      int ret1, ret2;
      sem_init(&sem1,1,1);
      sem_init(&sem2,1,0);
     // sigemptyset(&signals);
      //sigaddset(&signals,SIGUSR2);
      if(argc!=3)
      {
      printf("entered incorrect number of arguments from command line\n");
      exit(-1);
      }
      buf=(char *)malloc(strlen(args[1]));
      if(buf==NULL){
        printf("memory error\n");
        return -1;
      }
      ret1=pthread_create(&t1,NULL,thread1,args[1]);
      if(ret1){
        printf("pthread_error\n");
        exit(-2);
      }
      ret2=pthread_create(&t2,NULL,thread2,args[2]);
      if(ret2){
        printf("pthread_error\n");
        exit(-3);
      }
      ret1=pthread_join(t1,NULL);
      if(ret1){
        printf("pthread_join error\n");
        exit(-5);
      }
      ret2=pthread_join(t2,NULL);
      if(ret2){
        printf("pthread_join error\n");
        exit(-6);
      }
      free(buf);

  }

void *thread1(char *ptr)
{ 
  sem_wait(&sem1);
  printf("in thread1 string  = %s\n",ptr);
  strcpy(buf,ptr);//raise(SIGUSR2);
  //pthread_kill(t2,SIGUSR2);
  sem_post(&sem2);
}
void *thread2( char *fptr)
    {
       //int sig=SIGUSR2;
       //sigwait(&signals,&sig);
     sem_wait(&sem2); 
      printf("file name is==%s\n",fptr);
       fp=fopen(fptr,"r+");
       if(fp==NULL){
         printf("file open error\n");
         exit(-7);
       }
     char ch,b[100];
     int i=0,ret3;
//     lseek(fp,0,SEEK_SET);
     while(1){
     ch=fgetc(fp);
     if(feof(fp))
         break;
     b[i]=ch;
     if(b[i]==' '){
	
         ret3=compareword(b);
       if(ret3==0){
         fseek(fp,-strlen(buf)-1,SEEK_CUR);
         reverse(buf);

         //fwrite(buf,1,strlen(buf),fp);
         fprintf(fp,"%s",buf);
//         printf(
       }
       i=0;
     }
    else
     i++;
    sem_post(&sem1);
     }

     fclose(fp);
    }
int compareword(char *wrd)
{
	int j=0;
	for(j=0;j<strlen(buf);j++){
		if(((buf[j]-wrd[j])==0)||((wrd[j]-buf[j])==32)){
			continue;
		}
		else{
			
			return 1;
		}
	}
 return 0;
}

void reverse(char *str)
{
  int i,j=0;
  int l=strlen(str);
  char tmp;
  for(i=0,j=l-1;j>i;j--,i++){
    tmp=str[i];
    str[i]=str[j];
    str[j]=tmp;
  }
  printf("str=%s\n",str);
}
