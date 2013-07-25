#include<stdio.h>
double arr[35][2],n;
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
#define midx1 ((x1+x2)/2.0)
#define midx2 ((x2+x3)/2.0)
#define midy1 ((y1+y2)/2.0)
#define midy2 ((y2+y3)/2.0)



void center(int z)
{
     
     // (y2-y1)*y+(x2-x1)*x=(x2-x1)*midx1+(y2-y1)*midy1;
     // (y3-y2)*y+(x3-x2)*x=(x3-x2)*midx2+(y3-y2)*midy2;
     
     double det = a1*b2 - a2*b1;
      if(det==0)
      count1++;
      else
      {        
        double x = (b2*c1 - b1*c2)/det;
        double y = (a1*c2 - a2*c1)/det;
      // printf("determinant=%f x=%f y=%f radisu=%f point %d %d \n",det,x,y,sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1)),arr[z][0],arr[z][1]);  
              if((x-x1)*(x-x1)+(y-y1)*(y-y1)>=(x-arr[z][0])*(x-arr[z][0])+(y-arr[z][1])*(y-arr[z][1]))
              count++;
              else
              count1++;
       
       }
 }
      

 void select(int i,int j,int z)
 {
      if(j==3)
      center(z);
      else if(j<3&&i<n)
      {
      brr[j][0]=arr[i][0];
      brr[j][1]=arr[i][1];
      if(i==z)
      {
      select(i+1,j,z);
        }
      else
       {
      select(i+1,j+1,z);
      select(i+1,j,z);
         }
      }
 }
 int main()
{
      int t,i;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%lf",&n);
                     for(i=0;i<n;i++)
                     scanf("%lf %lf",&arr[i][0],&arr[i][1]);
                   for(i=0;i<n;i++)
                select(0,0,i);                 
                printf("%.10lf\n",count/(count+count1));
                count=0;count1=0;
      
                }
      return 0;
      }
