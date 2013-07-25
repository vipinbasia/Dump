    #include<stdio.h>
    #include<string.h>
    int arr[100010];
    int result[100010];
    int main()
    {
    long int number,m,n,k,count=0,l=0,p;
    scanf("%ld",&m);

    for(n=0;n<m;n++)
    {
    scanf("%ld",&number);
    arr[number]=1;
    }
    for(k=0;k<=100000;k++)
    {
    if(arr[k]==1)
    {
    result[l++] = k;
    count++;
    }
    if(count>0)
    break;
    }
    k++;
    for(;k<=100000;k++)
    {
    if(arr[k]==1)
    {
    result[l++] = k;
    for(p=0;p<l-1;p++)
    {
    arr[k+k-result[p]]=0;
    }
    count++;

    }
    }
    printf("%ld\n",count);
    for(k=0;k<=100000;k++)
    {
    if(arr[k]==1)
    printf("%ld ",k);
    }
    printf("\n");
    return 0;
    }
