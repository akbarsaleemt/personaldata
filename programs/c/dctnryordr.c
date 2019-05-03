#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,j;
    printf("enter number of strings\n");
      scanf("%d",&n);
    char str[n][100],temp[100];
    printf("enter:%d words\n",n);
           for(i=0;i<n;i++)
                scanf(" %s",str[i]);
            for(i=0;i<n;i++){
                for(j=i+1;j<n;j++){
                    if(strcmp(str[i],str[j])>0)
                    {
                      strcpy(temp,str[i]);
                      strcpy(str[i],str[j]);
                      strcpy(str[j],temp);
                    }
                }
            }
            printf("after sorting\n");
            for(i=0;i<n;i++)
              printf("str[%d]=%s\n",i,str[i]);

}
