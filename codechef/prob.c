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

        var=(c/total)*(a/(total-1.0));

        result=(a/total);

        while(c>0)
        {
            int value=((c-1.0)/(total-2.0));

            var=var+(var*value);

            c--;
            total--;
        }
        result+=var;
        printf("%f\n",result);

    }
    return 0;
}
