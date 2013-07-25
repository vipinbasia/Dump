#include<stdio.h>
double a[100005];
int main()
{
    long int t,i;
    scanf("%ld",&t);
    a[1]=0.45;
    a[2]=0.945;
    double temp=a[1]/10;
    for(i=3;i<100005;i++)
    {
         temp=temp/10;
         a[i]=a[i-1]+temp+(a[i-1]-a[i-2]);
    }
    while(t--)
    {
       long int n;
        scanf("%ld",&n);
        printf("%f\n",a[n]);
    }
    return 0;
}
