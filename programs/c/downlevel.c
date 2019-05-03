#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int downToZero(int n) 
{
    int *arr=(int *)malloc(sizeof(int));
     int *level=(int *)malloc(sizeof(int));
    int i,j=1,k,count;
    arr[0] = n;
    level[0] = 0;
    for(i=0;;i++)
    {
      arr=(int*)realloc(arr,(j+1)*sizeof(int));
    	level=(int*)realloc(level,(j+1)*sizeof(int));
        arr[j] = ((arr[i]) -1);
        level[j] = (level[i])+1;
        if(arr[j] == 0)
            break;
        j++;
        for(k=2;k<=sqrt(arr[i]);k++)
        {
            if((arr[i])%k == 0)
            {
                arr=(int *)realloc(arr,(j+1)*sizeof(int));
	            	level=(int*)realloc(level,(j+1)*sizeof(int));
                arr[j] = (arr[i])/k;
                level[j] = (level[i])+1;
                j++;
            }
        }
	
    }
    	count= level[j];
      free(level);free(arr);
      return count;
}
int main()
{
	int n;
	printf("Enter No.:");
	scanf("%d",&n);
	printf("Min Distance:%d\n",downToZero(n));
}
