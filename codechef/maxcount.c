#include<stdio.h>
int arr[10005];
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        int n,temp;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&temp);
            arr[temp]+=1;

        }
       int min=arr[0];
       int index=0;
        for(i=1;i<10005;i++)
        {
           // printf("%d\n",arr[i]);

            if(arr[i]>min)
            {

            index=i;
            min=arr[i];
            }
        }
        printf("%d %d\n",index,min);
        for(i=0;i<10005;i++)
        {
            arr[i]=0;
        }
    }
    return 0;
}
