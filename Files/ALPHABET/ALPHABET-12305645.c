#include<stdio.h>

int main()
{
    char s[30],w[15],s1[27]={0};
    int i,n,j,flag;
    scanf("%s %d",s,&n);
    for(i=0;s[i]!='\0';i++)
    {
        s1[s[i]-'a']=1;
    }
    for(i=1;i<=n;i++)
    {
        scanf("%s",w);
        flag=0;
        for(j=0;w[j]!='\0';j++)
        {
            if(s1[w[j]-'a']==0)
            {
                flag=1;
                printf("No\n");
                break;
            }
        }
        if(flag==0)
            printf("Yes\n");
    }
    return 0;
}