#include<stdio.h>
int main()
{
    int t,i,k,j;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int b[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            b[i]=1;
        }
        for(i=0;i<n;i++)
        {
            k=1;
            for(j=i+1;j<n;j++)
            {
                    if((a[i]+k)==a[j])
                    {
                        b[i]+=1;
                    }
                    k++;

            }
        }
        int max=b[0];
        for(i=1;i<n;i++)
        {
            if(max<b[i])
            {
                    max=b[i];

            }

        }
        printf("%d\n",n-max);
    }
    return 0;
}
