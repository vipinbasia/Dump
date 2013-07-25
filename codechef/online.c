#include<stdio.h>
long a1[100000][2];
long a2[100000][2];
long result[100000];
long value(long cost,int i,int j,int n)
{
    if(i>n)
        return cost;
    else
    {


        int k;

        long temp=(a1[i+1][j]-a2[i][j]);
        long temp1;

        for(k=0; k<2; k++)
        {
           value(cost+a1[i+1][k],i+1,k,n);

               }


    }
}
int main()
{
    int t,n,m,i,j;
    long temp,min;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        int a3[2]= {0};
        for(i=0; i<n; i++)
        {
            for(j=0; j<2; j++)
            {
                scanf("%ld",&a1[i][j]);
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<2; j++)
            {
                scanf("%ld",&a2[i][j]);
            }
        }


        for(i=0;i<(n-1);i++)

        {


            for(j=0; j<2; j++)
            {
                temp=a1[i][j];
              result[j]=value(temp,i,j,n-2);


            }
        }
        min=result[0];
        for(i=0;i<n;i++)
        {
            if(result[i]<min)
            {
                min=result[i];
            }
        }
        printf("%ld\n",min);
    }
    return 0;
}
