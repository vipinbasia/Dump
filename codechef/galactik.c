#include<stdio.h>
int parent[100002];
int value[100002];
int min[100002];
int find(int i)
{

    while(i!=parent[i])
        i=parent[i];

    return parent[i];
}
void uni(int i,int j)
{

    int x=find(i);
    int y=find(j);
    if(x!=y)
    {
        if(x<y)
        {
            parent[y]=x;
        }
        else
        parent[x]=y;
    }

}
int main()
{
    int n,a,b,i,k;
    long int result=0,count=0;
    long int m;
    scanf("%d %ld",&n,&m);
     for(i=1; i<=n; i++)
    {
        parent[i]=i;
    }
    while(m>0)
    {

        scanf("%d %d",&a,&b);
        uni(a,b);
        m--;
    }

    for(i=1; i<=n; i++)
    {
        scanf("%d",&value[i]);
    }

     for(i=1; i<=n; i++)
    {
        min[i]=20000;
    }
    for(i=1;i<=n;i++)
    {
         k=find(i);
         if(min[k]==20000)
         {
             count++;
             min[k]=value[i];
         }

         else if(min[k]<0 )
         {
             if(value[i]>=0)
             {
                 min[k]=value[i];
             }
         }
         else if(min[k]>=0)
         {
             if(value[i]>=0 && value[i]<min[k])
             {
                 min[k]=value[i];
             }
         }
    }


    int val=50000;
     for(i=1;i<=n;i++)
    {

        if(val>min[i])
        val=min[i];
    }
    for(i=1;i<=n;i++)
    {
        if(min[i]<0)
        {

            break;
        }
        else if(min[i]!=20000)
        {
            result+=(min[i]+val);

        }
    }
        if(n==1 || count==1)
        printf("%d",0);
        else if(i<=n)
        printf("%d",-1);
        else
        printf("%ld\n",result-(2*val));


    return 0;
}
