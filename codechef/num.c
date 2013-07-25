#include<stdio.h>
#include<math.h>
int primes[1000010];
int count[1000010];
int main()
{
    int t,n,i,j;
    int a[10];
    long int result=1;
    scanf("%d",&t);
    for(i=0; i<1000010; i++)
        primes[i] = 1;
    for(i=2; i<=sqrt(1000010); i++)
    {
        if (primes[i])
        {
            for(j=i; (j*i)<1000010; j++)
                primes[i*j] = 0;
        }
    }
    primes[0]=0;
    primes[1]=1;

    while(t--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0; i<n; i++)
        {
            if(primes[a[i]]==1)
            {
                count[a[i]]+=1;
                continue;
            }
            else
            {
                j=2;
                while(a[i]>0 && j<=(a[i]))
                {
                    while((a[i]%j)==0 && primes[j]==1 && a[i]>0)
                    {
                        count[j]+=1;

                        a[i]=a[i]/j;

                    }

                        j++;
                }
            }
        }
        result=1;
        for(i=0; i<1000010; i++)
        {
            if(count[i]>0)
            {
                result*=(count[i]+1);


                count[i]=0;
            }
        }
        printf("%ld\n",result);
    }
    return 0;
}
