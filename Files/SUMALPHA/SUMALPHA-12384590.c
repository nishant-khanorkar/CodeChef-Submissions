#include <stdio.h>

int main()
{
    int n,i,j,sum;
    char s[12];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        sum=0;
        for(j=0;s[j]!='\0';j++)
        {
            sum += (s[j]-'a')%5;
        }
        printf("%d\n",sum);
    }
    return 0;
}