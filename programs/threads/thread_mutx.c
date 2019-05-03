#include <pthread.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <ctype.h>
#define SIZE 10
int front = -1, rear = -1;
int items[SIZE];
//void *fun1(void *arg);
void *enqueue(void *arg);
void *dequeue(void *arg);
void push(void);
void pop(void);
//void *fun2(void *arg);
pthread_t t1,t2;
pthread_mutex_t lock;
int isFull()
{
    if( (front == rear + 1) || (front == 0 && rear == SIZE-1)) return 1;
	    return 0;
		}

		int isEmpty()
		{
		    if(front == -1) return 1;
			    return 0;
				}
int main()
{
		int res1,res2;
		pthread_mutex_init(&lock,NULL);
		//pthread_mutex_init(&lock2,NULL); //mutex intialization
		printf("threads creation");
		res1=pthread_create(&t1,NULL,enqueue,NULL);
		//if (res1 != 0){
		//		handle_error_en(res1, "pthread_create");
	//	}

		if(res1)
		{
		  fprintf(stderr,"Error - pthread_create() return code: %d\n",res1);
		 exit(EXIT_FAILURE);
	//	}
		res2=pthread_create(&t2,NULL,dequeue,NULL);
		//if (res2 != 0){
		//		handle_error_en(res2, "pthread_create");
	//	}
		if(res2)
		{
		     fprintf(stderr,"Error - pthread_create() return code: %d\n",res1);
		   exit(EXIT_FAILURE);
		}

		if ( pthread_join(t1,NULL) != 0) {
				perror("frist thread failed to join");
				exit(0);
		}
		if ( pthread_join(t2,NULL) != 0) {
				perror("second thread failed to join");
				exit(0);
		}
		//pthread_join(t2,NULL);
		pthread_mutex_destroy(&lock);
		//mutex destory
}


void *enqueue(void *arg)
{
		int num,i;
		pthread_mutex_lock(&lock);
		printf("enter no of elements you want to enqueue");
		printf("enter elements");
		scanf("%d",&num);
		for(i=0;i<num;i++)
		{
				push();

		}
		pthread_mutex_unlock(&lock);
}

void *dequeue(void *arg)
{

		int num,i;
		pthread_mutex_lock(&lock);
		printf("enter no of elements you want to dequeue");
		printf("enter elements");
		scanf("%d",&num);
		for(i=0;i<num;i++)
		{

				pop();

		}
		pthread_mutex_unlock(&lock);
}

void push()
{
		int data;

		puts("enter data");
		scanf("%d",&data);
		if(isFull()) printf("\n Queue is full!! \n");

		else
		{
				if(front == -1) front = 0;
				rear = (rear + 1) % SIZE;
				items[rear] = data;
				printf("\n Inserted -> %d\n", data);
		}

}

void pop()
{
		int data;

		if(isEmpty()) {
				printf("\n Queue is empty !! \n");

				return;
		} else {
				data = items[front];
				if (front == rear){
						front = -1;
						rear = -1;
				} 
				else {
						front = (front + 1) % SIZE;

				}
				printf("\n Deleted element -> %d \n", data);


		}
	}
	}


/*void *fun1(void *arg)
  {
  int i;
  pthread_mutex_lock(&lock);
  val=10;
  for(i=0;i<100;i++)
  {
  val++;
  printf("val1 is %d\n",val);
  }
  pthread_mutex_unlock(&lock);
  }*/

/*void *fun2(void *arg)
  {
  int i;
  pthread_mutex_lock(&lock);
  val=20;
  for(i=0;i<100;i++)
  {
  val++;
  printf("val2 is %d\n",val);
  }
  pthread_mutex_unlock(&lock);
  }*/
