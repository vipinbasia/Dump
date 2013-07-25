#include<stdio.h>
long int count(long int n,long long int doller)
{
	if(n<12)return n;
	else
	{
		doller+=(count((n/2),doller)+count((n/3),doller)+count((n/4),doller));
		
	}
	return doller;
			
}
int main()
{
	long int n;
	while((scanf("%ld",&n)>0))
	{
	
		
		printf("%lld\n",count(n,0));
		
	
	}
return 0;
}
