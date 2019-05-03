#include<stdio.h>
void main()
{
  FILE *fp;
  fp=fopen("file1.txt","w");
  if(fp==NULL){
    printf("file open error\n");
    return -1;
  }
  char buf[100];
  printf("enter data to string\n");
  gets(buf);
  fwrite(buf,1,strlen(buf),fp);
  fclose(fp);
  fp=fopen("file1.txt","r");
  if(fp==NULL){
    printf("open error\n");
    return -2;
  }
  char ch;
  while(1){
  ch=fgetc(fp);
  if(feof(fp))
    break;
  printf("%c",ch);
  }
  printf("\n");
  fclose(fp);
}
 

