#include<stdio.h>
#include<string.h>
#include<stdlib.h>
   char m[100];
    int temp1[200];
    int temp2[200];
    int ac[200];
    int bc[200];
int main()
{
    int t,i,n,count1=0,count2=0,n1,n2;
    scanf("%d",&t);
    getchar();
   // gets(m);
    i=strlen(m);
    printf("%s",m);
    for(i=0; i<strlen(m); i++)
    {
        printf("%c ",m[i]);
        n=m[i];
        temp1[n]=i;
        temp2[n]=i;
    }

    while(t--)
    {

        char a[101];
        char b[101];

        gets(a);
        gets(b);
        count1=0,count2=0;
        for(i=0; i<strlen(a); i++)
        {

            n=a[i];
        ac[n]++;
        }
        for(i=0; i<strlen(b); i++)
        {

            n=b[i];
        bc[n]++;
        }
        for(i=0;i<200;i++)
        {
            if(ac[i]!=0 && bc[i]!=0)
            {
                    if(ac[i]>=bc[i])
                    {
                        ac[i]-=bc[i];
                        bc[i]=0;
                    }
                    else
                    {
                        bc[i]-=ac[i];
                        ac[i]=0;
                    }
            }
        }
        for(i=0; i<strlen(a); i++)
        {

            int n1=a[i];

            if(ac[n1]!=0 )
            {
              //  printf("%c %d\t",a[i],temp1[n1]);
                    count1+=temp1[n1];
                    ac[n1]=0;
            }


        }


        for(i=0; i<strlen(b); i++)
        {

            int n2=b[i];
            if(bc[n2]!=0)
            {
                    count2+=temp2[n2];
                    bc[n2]=0;
            }


        }
        printf("%d %d \n", count1,count2);
          for(i=0; i<strlen(m); i++)
    {
       // printf("%d ",m[i]);
        n=m[i];
        temp1[n]=i;
        temp2[n]=i;
    }
        if(count1>count2)
        printf("ALICE\n");
        else if(count2>count1)
        printf("BOB\n");
        else
        printf("TIE\n");
    }
}
