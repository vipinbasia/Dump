#include<stdio.h>
int ans[100000];
int main()
{
int i,p,n,t,temp,carry=0,count=1,k;
scanf("%d",&n);
while(n--)
{
    scanf("%d",&t);
    count=1;
    carry=0;
for(i=1;i<=t;i++)
{

    if(i==1)
    {
        ans[0]=i;

        continue;
    }
    else
    {

        {
            k=0;
            temp=ans[k]*i;
            while(k<count)
            {
               // printf("%d",ans[k]);
                temp=ans[k]*i;
                if((temp+carry)<=9)
                {
                    ans[k]=temp+carry;
                    carry=0;
                }
                else
                {

                ans[k]=((temp+carry)%10);
                carry=(temp+carry)/10;
                }


            k++;
            }
            while(carry>0)
            {
                ans[k]=carry%10;
                carry/=10;
                k++;
            }

            count=k;
        }

    }

}
 for(p=count;p>=0;p--)
            {

                if(ans[p]!=0)
                break;
            }
  for(p;p>=0;p--)
            {

                printf("%d",ans[p]);


            }
            for(i=0;i<100000;i++)
            {
                ans[i]=0;
            }
            printf("\n");
}
return 0;
}
