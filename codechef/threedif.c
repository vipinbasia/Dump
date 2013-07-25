#include<stdio.h>
int main()
{
    long long int t,n[3],temp,d,c;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&n[0],&n[1],&n[2]);
            for (c = 1 ; c <= 2; c++) {
    d = c;

    while ( d > 0 && n[d] < n[d-1]) {
      temp          = n[d];
      n[d]   = n[d-1];
      n[d-1] = temp;

      d--;
    }
  }
  c=1000000007;
        printf("%lld\n",((((n[0]%c)*((n[1]-1)%c))%c)*((n[2]-2)%c)%c));
    }
}
