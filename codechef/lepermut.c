#include<stdio.h>
int main()
{
    int t,n,local=0,i,inver=0,j;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        local=0;
        inver=0;

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            local++;
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                inver++;
            }
        }
        if(local==inver)
            printf("YES\n");
        else
                printf("NO\n");
    }
    return 0;
}
