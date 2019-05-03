#include<stdio.h>
#include<stdlib.h>
static int count,cont;
int factors(int);
int factors2(int);
void main(){
  int num,i,res=0,num2,c,c1;
    printf("enter a number\n");
    scanf("%d",&num);
    if(num>0){
    res=num;
    num2=num-1;
    count=0;cont=0;
    while(res>0){
    res=factors(res);
    }

	res=num-1;
	cont++;
    	while(res>0){
           res=factors2(res);
          }
            if(cont<count)
              c=cont;
             else
               c=count;
      
	res=num2;
   	 
    count=0;cont=1;
    while(res>0){
    res=factors(res);
    }

	res=num2-1;
	cont++;
    	while(res>0){
           res=factors2(res);
          }
            if(cont<count)
              c1=cont;
             else
               c1=count;
	
             if(c1>c)
               printf("count=%d\n",c);
             else
               printf("count=%d\n",c1);

    }
    else
      printf("count=%d\n",count);

}

int factors(int n){
  int i,diff=0,res=0;
  if(n>2){
    
    for(i=1;i<=(n/2);i++){
    	 res=n/i;
      if(res*i==n){
  //     printf("%dx%d=%d\n",res,i,n);
      if(res<i){
  //     printf("%dx%d=%d\n",res,i,n);
       count=count+1;
       return i;
      }
      if(res==i){
    //   printf("%dx%d=%d\n",res,i,n);
        count=count+1;
        return i;
      }
      if(n==3){
      // printf("%dx%d=%d\n",res,i,n);
        count=count+1;
        return 2;
      }
     if(res==2){
        if(i==2){
      // printf("%dx%d=%d\n",res,i,n);
       count=count+1;
          return 2;
        }
      }
      }
    }
    if(n%res!=0){
      // printf("%dx%d=%d\n",res,i,n);
      count=count+1;
      return n-1;
    }
  }
  else if(n>0){
      // printf("%dx%d=%d\n",res,i,n);
       count=count+1;
    return n-1;
  }
 
}
int factors2(int n){
  int i,diff=0,res=0;
  if(n>2){
    
    for(i=1;i<=(n/2);i++){
    	 res=n/i;
      if(res*i==n){
      // printf("%dx%d=%d\n",res,i,n);
      if(res<i){
      // printf("%dx%d=%d\n",res,i,n);
       cont=cont+1;
       return i;
      }
      if(res==i){
        cont=cont+1;
        return i;
      }
      if(n==3){
        cont=cont+1;
        return 2;
      }
     if(res==2){
        if(i==2){
       cont=cont+1;
          return 2;
        }
      }
      }
    }
    if(n%res!=0){
      cont=cont+1;
      return n-1;
    }
  }
  else if(n>0){
       cont=cont+1;
    return n-1;
  }
 
}


