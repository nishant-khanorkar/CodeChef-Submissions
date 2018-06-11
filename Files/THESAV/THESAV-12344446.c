#include<stdio.h>
#include<stdlib.h>
#define ll long long
#define slld(a) scanf("%lld",&a);
#define plld(a) printf("%lld\n",a);


int main()
{
    ll N,t,i,j,p;
    char x[100001];
    slld(t);
    
    for(i=0;i<t;i++)
    {
        scanf("%s",x);
        p=0;
        if(x[0]=='0')
        {
            printf("NO\n");
            continue;
        }
        for(j=2;x[j]!='\0';j++)
        {
            if(x[j]=='0')
            {
                if(x[j-1]=='*'||x[j-2]=='*')
                    continue;
                else
                {
                    p=1;
                    printf("NO\n");
                }
            }
        }
        if(p==0)
            printf("YES\n");
    }

    return 0;
}