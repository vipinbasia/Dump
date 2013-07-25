#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char j[105];
char s[105];
int j1[150];
int main()
{
    int t,i;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%s",j);
        scanf("%s",s);
        int count=0;
        for(i=0;i<strlen(j);i++)
        {
            j1[j[i]]=1;
        }
        for(i=0;i<strlen(s);i++)
        {
            if(j1[s[i]]==1)count++;
        }
        for(i=0;i<strlen(j);i++)
        {
            j1[j[i]]=0;
        }
       printf("%d \n",count);
    }
    return 0;
}
