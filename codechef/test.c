    #include<stdio.h>
   long long int arr[32][22];
   long int doller(long int N, int i, int j) {
    if(N<12) return N;
    if(arr[i][j]==0) {
    arr[i][j] = doller(N/2,i+1,j) + doller(N/3,i,j+1) + doller(N/4,i+2,j);
    }
    return arr[i][j];
    }
     
    int main() {
    long int N;
    int i=0,j=0;
    while(scanf("%ld",&N)!=EOF){
    for(i=0;i<32;i++)
    for(j=0;j<22;j++)
    arr[i][j]=0;
    printf("%lld\n",doller(N,0,0));
    }
    return 0;
    }
