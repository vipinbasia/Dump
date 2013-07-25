#include<stdio.h>
#include<math.h>
double arr[30][2];
double dist(int x,int y)
{
    int d1 = arr[x][0] - arr[y][0];
        int d2 = arr[x][1] - arr[y][1];
        return sqrt(d1*d1+d2*d2);

}
int death(int x,int y,int z,int p)
{
    double xy=dist(x,y);
    double xz=dist(x,z);
    double xp=dist(x,p);
    double zy=dist(z,y);
    double py=dist(p,y);
    double zp=dist(z,p);
    if((((xz*py)+(xp*zy))>=(xy*zp)) || (((xy*zp)+(xp*zy))>=(xz*py)) || (((xz*py)+(xy*zp))>=(xp*zy)) )
        return 1;
        else
        return 0;
}
int main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&arr[i][0],&arr[i][1]);
        }
        int res=death(0,1,2,3);
        res+=death(0,1,3,2);
        res+=death(0,2,3,1);
        res+=death(1,2,3,0);
        printf("%d",res);

    }

    return 0;

}
