/* output
number at comm function1:1
number at comm function1:2
number at comm function1:3

number at come function2:4
number at come function2:5
number at come function2:6
number at come function2:7
number at come function2:8

number at comm function1:9
number at comm function1:10
number at comm function1:11
*/




#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
pthread_mutex_t count_mutex= PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond_var =PTHREAD_COND_INITIALIZER;

static int f=0;

void *comm()
{
for(;;)
{
pthread_mutex_lock(&count_mutex);
pthread_cond_wait(&cond_var,&count_mutex);
f++;
printf("number at comm function1:%d\n",f);
pthread_mutex_unlock(&count_mutex);
if(f>10) return NULL;
}
}


void *come()
{
for(;;)
{
pthread_mutex_lock(&count_mutex);
if(f<3||f>7)
{
// till when my thread should not work
// comm can work
pthread_cond_signal(&cond_var);
}
else
{
f++;
printf("number at come function2:%d\n",f);
}
pthread_mutex_unlock(&count_mutex);
if(f>10) return NULL;
}
}
int main()
{
pthread_t t1,t2;
int rc;

if((rc=pthread_create(&t1,NULL,comm,NULL)))
{
      fprintf(stderr, "error: pthread_create, rc: %d\n", rc);
      return EXIT_FAILURE;
}

if((rc=pthread_create(&t2,NULL,come,NULL)))
{
      fprintf(stderr, "error: pthread_create, rc: %d\n", rc);
      return EXIT_FAILURE;
}
pthread_join(t1,NULL);
pthread_join(t2,NULL);

}
