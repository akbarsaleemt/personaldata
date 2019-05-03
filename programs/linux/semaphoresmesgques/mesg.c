#include<stdio.h>
//#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>

#define KEY 199220
#define SRV_MSG_TYP 1
void toggle(char*,int);
void main()
{
int *msghdr,msgid,ret;
char tx[20],rx[20];
while(1)
{
msgid=msgget(KEY,0777|IPC_CREAT);
if(msgid<0)
{
printf("\n message queue not opend\n");

}
else
{
printf("Opened message queue.in server Id is %d\n",msgid);
printf("server waiting for client\n");
ret=msgrcv(msgid,rx,20,SRV_MSG_TYP,0);	
printf("message received from client %s\n",rx+8);
toggle(rx+8,ret);
memcpy(tx,rx+4,4+strlen(rx+8)+1);
msgsnd(msgid,tx,4+strlen(tx+4)+1,0);
}
}
}
void toggle(char *buf,int cnt)
{
	int ii;
	for(ii=0;ii<cnt;ii++)
	{
		if((buf[ii] >= 'A') && (buf[ii] <= 'Z'))
			buf[ii] += 0x20;
		else if((buf[ii] >= 'a') && (buf[ii] <= 'z'))
			buf[ii] -= 0x20;
	}
}

