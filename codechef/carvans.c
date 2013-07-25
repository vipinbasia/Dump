#include<stdio.h>
long int a[10001];
int main()
{
    int t,n,i,count=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        if(n==1)
        {
            printf("%d\n",n);
            continue;
        }
        count=0;
        for(i=1;i<n;i++)
        {
                if(a[i-1]>=a[i])
                count++;
                else
                {
                    a[i]-=(a[i]-a[i-1]);
                }

        }

        printf("%d\n",count+1);
    }
    return 0;
}
