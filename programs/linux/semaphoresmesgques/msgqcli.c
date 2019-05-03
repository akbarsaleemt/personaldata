#include<stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>
#define KEY 199220
#define SRV_MSG_TYP 1
void main()
{
unsigned int *msghdr,msgid,ret;
unsigned char tx[20],rx[20];
while(1)
{
msgid=msgget(KEY,0);
if(msgid<0)
{
printf("\n message queue not opend\n");
}
else
{
printf("Opened message queue.clint1 msgId is %d\n",msgid);
printf("pid of client1 is %d\n",getpid());
printf("enter message\n");
scanf("%s",tx+8);
msghdr=(int *)tx;
msghdr[0]=SRV_MSG_TYP;
msghdr[1]=getpid();
msgsnd(msgid,tx,4+4+strlen(tx+8)+1,0);
ret=msgrcv(msgid,rx,20,getpid(),0);	
printf("message received from server %s\n",rx+4);
}
}
}
