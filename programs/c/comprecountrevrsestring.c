#include<stdio.h>
#include<string.h>
#include<stdlib.h>
FILE *fp;
int count=0;
char fname[100];
int compareword(char*,char *);
char* reverse(char*, int);
int main()
{
 // freopen("test.txt","r",stdin);
  char buf[100],cbuf[100];
  printf("enter file name\n");
  scanf("%s",fname);
  __fpurge(stdin);
  printf("enter string to file \n");
  fgets(buf,100,stdin);
  printf("enter string to search\n");
  scanf("%s",cbuf);
  fp=fopen(fname,"w+");
  if(fp==NULL){
    printf("file open error\n");
    return -1;
  }
  fprintf(fp,"%s",buf);
  //fwrite(buf,1, strlen(buf),fp);
  fclose(fp);
  fp=fopen(fname,"r+");
  if(fp==NULL){
    printf("file open error\n");
    return -2;
  }
  
  char ch,b[100];
  int i=0,ret;
  while(1){
    fscanf(fp,"%s",b);
  //  ch=fgetc(fp);
   // b[i]=ch;
    if(feof(fp)!=0)
      break;
     //   if(ch=' '){
     // b[i]='\0';
      printf("buf=%s\n",b);
      ret=compareword(b,cbuf);
      if(ret==0){
        // count= count+1;
        printf("strings are equal\n");
        char*ptr=reverse(b,strlen(cbuf));
        fseek(fp,-strlen(cbuf),SEEK_CUR);
        fprintf(fp,"%s",ptr);
      }
     // i=0;
   // }
   // else
    //  i++;
    
  }
  fclose(fp);
  printf("number of times the word found in file is %d\n",count);
}

int compareword(char *ptr,char *str)
{
  int i=0;
  char cbuf[100],chr;
  int len1=strlen(ptr);
  int len2=strlen(str);
  printf("ptr=%s\n str=%s\n",ptr,str);
  if(len1==len2){
    printf("string lengths are equal\n");
    for(i=0;i<len1;i++){
      if((ptr[i]-str[i])==0){
        continue;
      }
      else{
        printf("strings are not equal\n");
        return -2;
      }
    }
    count++;
    return 0;
  }
}


char*  reverse(char* rptr,int l){
  int i,j;
  char temp;
  printf("in reverse function rptr=%s\n",rptr);
  for(i=l-1,j=0;i>j;i--,j++){
    temp=rptr[i];
    rptr[i]=rptr[j];
    rptr[j]=temp;
  }
  for(i=0;i<l;i++){
    if('a'<=rptr[i]<='z'){
      rptr[i]=rptr[i]-32;
    }
    else{
      if('A'<=rptr[i]<='Z')
        rptr[i]=rptr[i]+32;
    }
  }

  return rptr;
}









