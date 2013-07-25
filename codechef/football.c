#include<stdio.h>
int planet[100000][100000];
int value[100001];
int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    while(m--)
    {
        scanf("%d %d",&i,&j);
        planet[i][j]=1;
        palnet[j][i]=1;
    }
    i=0;
    while(n--)
    {
        scanf("%d",&value[i]);
        i++;
    }

    return 0;
}
