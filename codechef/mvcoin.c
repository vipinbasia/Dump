#include<stdio.h>
int main()
{
    int t,n,k,s,i,j,count,p;
    scanf("%d",&t);
    while(t--)
    {
        int a[1005],count=0;
        scanf("%d %d",&n,&k);
            for(i=0;i<n;i++)
            {
                scanf("%d",&s);
                a[s]=1;
            }
            for(p=0,i=s;i>1;i--)
            {
                if(a[i]==1)
                {
                    for(j=i-1;j>0+p;j--)
                    {
                            if(a[j]!=1)
                            {

                                count++;
                                                            //printf("%d\t %d\n",i,j);
                            //   break;

                            }
                    }
                    p++;
                }
            }
            printf("%d\n",count);
    }
    return 0;
}
