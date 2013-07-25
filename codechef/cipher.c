#include<stdio.h>
#include<string.h>
char str[100002];
char arr[150];
int main()
{
    int t,temp,i;
    scanf("%d",&t);
    while(t--)
    {
                scanf("%s",str);
                temp=97;
                for(i=0;i<strlen(str);i++)
                {
                        if(arr[str[i]]==0)
                        {
                            arr[str[i]]=temp;
                            temp++;
                        }
                }
                  for(i=0;i<strlen(str);i++)
                {

                        {
                            printf("%c",arr[str[i]]);
                        }
                }
                printf("\n");
                for(i=0;i<strlen(str);i++)
                {

                        {
                           arr[str[i]]=0;
                        }
                }

    }
return 0;
}
