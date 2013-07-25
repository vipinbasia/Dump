#include<stdio.h>
int arr[105][105];
int a[105];
int main()
{
    int t,n,i,j,temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        temp=n;
        while(n>=0)
        {
             n--;
             if(n==-1)
             break;
            for(i=0;i<(temp-n);i++)
            {
                scanf("%d",&a[i]);
            }
            int temp1=temp-n-1;
            for(i=0;i<(temp-n);i++)
            {
                if(temp1==0)
                {
                    arr[0][0]=a[0];
                    break;
                }
                else
                {
                  if(i==(temp-n-1))
                  {
                      arr[temp1][i]+=arr[temp1-1][i-1]+a[i];
                  }
                  else

                  {
                      if(arr[temp1-1][i]>=arr[temp1-1][i-1])
                      {
                            arr[temp1][i]+=arr[temp1-1][i]+a[i];
                      }
                      else
                      {
                          arr[temp1][i]+=arr[temp1-1][i-1]+a[i];

                      }
                  }
                }
            }


        }

        int max=arr[temp-1][0];
        for(i=0;i<temp;i++)
            {
                if(max<arr[temp-1][i])
                {
                    max=arr[temp-1][i];
                }
            }
            for(i=0;i<temp;i++)
            {
                for(j=0;j<i+1;j++)
                {
                    arr[i][j]=0;
                }
            }
            printf("%d\n",max);
    }
}
