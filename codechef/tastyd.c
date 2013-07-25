#include<stdio.h>
long long int a[200005];
int sort(long long int a[],int s,int n)
{
    int c,j,flag=0;
   for (c = s ; c < n - 1; c++) {

            if(a[c]==a[n-1])
            {
                flag==1;
                break;
            }


        if(flag==1)
        break;

  }
if(flag==1)
return 0;
else
return 1;
}
int main()
{
    int i,j,c,d,k;
    long long int p,n;
    scanf("%lld %lld",&n,&p);
   long long int t,min;
    long long int temp=0,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        temp=a[i];
        min=a[i];
        for(j=i+1;j<n;j++)
        {
            if(sort(a,i,j+1)==0)
                break;



            if(min>a[j])
                min=a[j];

            temp+=a[j];
            if((temp-min)%p==0)

            {  // printf("%ld\n",temp);
                count++;}
        }
    }
    printf("%lld",count);
    return 0;
}
