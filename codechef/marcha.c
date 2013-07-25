#include <stdio.h>


int main ()
{
int t;
scanf("%d",&t);
while (t--)
{
int k, flag = 0, stem = 1;
scanf("%d",&k);
while (k--)
{
int leaves;
scanf("%d",&leaves);
if (leaves > stem)
{
flag = 1;
break;
}
stem = (stem - leaves) * 2;
}
if (flag==1 || stem!=0)
printf ("No\n");
else
printf ("Yes\n");
}
return 0;
}
