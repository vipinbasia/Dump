#include<stdio.h>
int main()
{
    int t;
    double var;
    double result;
    double total;
    double a,b,c,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf" ,&a,&b,&c,&d );
        total=a+b+c;


        printf("%f\n",a/(a+b));

    }
    return 0;
}
