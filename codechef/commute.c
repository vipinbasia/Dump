#include<stdio.h>
int main()
{
    int t,n,i,time=0,temp;
    int a[3];
    scanf("%d",&t);
    while(t--)
    {
        time=0;
        scanf("%d",&n);
        scanf("%d %d %d",&a[0],&a[1],&a[2]);
        time=a[0]+a[1];
        for(i=1;i<n;i++)
        {

            scanf("%d %d %d",&a[0],&a[1],&a[2]);
            temp=a[0];
            if(time>temp)


            time+=(temp-time)+a[1];

        }
        printf("%d\n",time);

    }
    return 0;
}
