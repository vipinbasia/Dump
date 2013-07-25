#include<stdio.h>
#include<math.h>
double arr[35][2];
double brr[3][2];
double count,count1;
#define x1 brr[0][0]
#define x2 brr[1][0]
#define x3 brr[2][0]
#define y1 brr[0][1]
#define y2 brr[1][1]
#define y3 brr[2][1]
#define a1 (x1-x2)
#define a2 (x3-x2)
#define b1 (y1-y2)
#define b2 (y3-y2)
#define c1 ((x1-x2)*midx1+midy1*(y1-y2))
#define c2 ((x3-x2)*midx2+midy2*(y3-y2))
#define midx1 ((x1+x2))
#define midx2 ((x2+x3))
#define midy1 ((y1+y2))
#define midy2 ((y2+y3))



void center(int z)
{

// (y2-y1)*y+(x2-x1)*x=(x2-x1)*midx1+(y2-y1)*midy1;
// (y3-y2)*y+(x3-x2)*x=(x3-x2)*midx2+(y3-y2)*midy2;

    double det = (a1*b2 - a2*b1);
    if(det==0)
        count1++;
    else
    {
        double var=2.0 * det;
        double x = (b2*c1 - b1*c2);
        double y = (a2*c1 - a1*c2);

 //printf("determinant=%f x=%f y=%f radisu=%f point %f %f \n",det,x,y,sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1)),arr[z][0],arr[z][1]);
        if((x-x1*var)*(x-x1*var)+(y-y1*var)*(y-y1*var)>=(x-arr[z][0]*var)*(x-arr[z][0]*var)+(y-arr[z][1]*var)*(y-arr[z][1]*var))

            count++;
        else
            count1++;

    }
}



int main()
{
    int t,i,j,k,p,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%lf %lf",&arr[i][0],&arr[i][1]);
        for(i=0; i<n-2; i++)
        {
            for(j=i+1; j<n-1; j++)
            {
                for(k=j+1; k<n; k++)
                {
                    for(p=0; p<n; p++)
                    {
                        if(p==i || p ==j || p==k)
                            continue;
                        else
                        {
                            brr[0][0]=arr[i][0];
                            brr[0][1]=arr[i][1];
                            brr[1][0]=arr[j][0];
                            brr[1][1]=arr[j][1];
                            brr[2][0]=arr[k][0];
                            brr[2][1]=arr[k][1];
// printf("%d\n",p);
                            center(p);
//printf("%f %f\n",count,count1);
                        }
                    }
                }
            }
        }

        printf("%.10f\n",count/(count+count1));
        count=0;
        count1=0;

    }
    return 0;
}
