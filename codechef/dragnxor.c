#include<stdio.h>
#include<math.h>

long int count1;
long int count2;
int main()
{
     int n,a,b,t,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&n,&a,&b);
       long int result[n];
       long int a1[31]={0};
        long int b1[31]={0};
        i=30;
        count1=0;
        count2=0;
        while(a>0)
        {
            a1[i]=a%2;
            if(a%2==1)
            count1++;
            a=a/2;
            i--;

        }
        i=30;
        while(b>0)
        {
            b1[i]=b%2;
            if(b%2==1)
            count2++;
            b=b/2;
            i--;
        }
        int count3=0;
        if(count1>(n-count2))
        count3=n-count2;
        else
        count3=count1;
        if(count2>(n-count1))
        count3+=n-count1;
        else
        count3+=count2;
        for(i=0;i<n;i++,count3--)
        {
            if(count3>0)
            result[i]=1;
            else
            result[i]=0;
        }
        long int res=0;
            for(i=0;i<n;i++)
            {
                res+=(result[i] * (pow(2,n-i-1)));
            }
            printf("%ld\n",res);

    }

    return 0;
}
