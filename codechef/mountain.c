#include<stdio.h>
long long int temp[300000];
int main()
{
	long int i,j,n;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp[i]);
	}
	for(i=0;i<n;i++)
		{	
			long long int val=0;
			for(j=i;j<n;j++)
			{
			val+=temp[j];
			
			}
		}
	return 0;
}
