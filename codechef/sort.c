#include<stdio.h>
long int a[1000];
long int ind[1002000];
long c;
int max(long int a[],int end)
{
    int i,index;
    index=0;
    for(i=0; i<end; i++)
    {
        if(a[index]<a[i])
        {
            index=i;
        }
    }
    return index;
}
long sort(long int a[],int index,int end,int n,int size,int k,long count)
{
    int j,flag=1;
    for(j=index;j<end;j++)
    {
        if(a[j]<=a[j+1])
        continue;
        else
        {
            flag=0;;
        break;
        }
    }
if(flag==0)
{


    ind[c]=index;
    c++;
    count++;
    int final;
    int i, j,p;
    long int temp;
    for ( i = index,p=0 ; i <= end-1 ; i++,p++)
    {
        for ( j = index ; j <= end - (p+1) ; j++ )
        {
            if ( a[j] > a[j + 1] )
            {
                temp = a[j] ;
                a[j] = a[j + 1] ;
                a[j + 1] = temp ;
            }
        }
    }


    if((end+k-1)>=size)
    {
        final=size;
    }
    else
        final=end+k-1;

     //   printf(" %d %d %d %d %d\n",index,end,final,a[final],a[n]);
    if(end>=n || (end==n-1 && a[end]==a[n]))
        return count;
    else
    sort(a,end,final,n,size,k,count);
}
else
{
    int final;
    if((end+k-1)>=size)
    {
        final=size;
    }
    else
        final=end+k-1;

     //   printf(" %d %d %d %d %d\n",index,end,final,a[final],a[n]);
    if(end>=n )
        return count;
    else
    sort(a,end,final,n,size,k,count);

}
}
int main()
{
    int t,n,j,i,k,end,index,flag;
    long count=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d" ,&n,&k);

        for(i=0;i<1000;i++)
        {
            a[i]=0;
            ind[i]=0;
        }
        for(i=0; i<n; i++)
        {
            scanf("%ld",&a[i]);

        }
            count=0;

        for(i=0; i<n; i++)
        {
            flag=0;
            for(j=0;j<n-1;j++)
            {
                if(a[j]<=a[j+1])
                continue;
                else
                flag=1;
            }
           // printf("%d",flag);
            if(flag==0)
            break;
            index=max(a,n-i);

            if((index+k-1)>=(n-1))
            {
                end=n-1;
            }
            else
            {
                end=index+k-1;
            }
            if(index==(n-(i+1)))
            continue;
            count+=sort(a,index,end,n-(i+1),n-1,k,0);


        }
    printf("%ld\n",count);
    c=0;
for(i=0;i<count;i++)
{
    printf("%ld ",ind[i]+1);
}
printf("\n");
    }
    return 0;
}

