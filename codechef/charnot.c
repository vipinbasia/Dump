#include<stdio.h>
int arr[100005];
int result[4];
int main()
{
    long int i,n,temp;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    result[0]=arr[0];
    result[1]=arr[1];
    temp=arr[1]-arr[0];
    for(i=2;i<n;i++)
    {
        if(arr[1]>=arr[0])
        {
            if(arr[i]!=(temp+arr[1]) && arr[i]!=(arr[0]-temp))
            {
                result[2]=arr[i];
                break;
            }


        }
        else
        {
             if(arr[i]!=(temp+arr[0]) && arr[i]!=(arr[1]-temp))
            {
                result[2]=arr[i];
                break;
            }
        }

    }

    printf("%d\n",3);
    for(i=0;i<3;i++)
    {
        printf("%d ",result[i]);
    }
    return 0;

}
