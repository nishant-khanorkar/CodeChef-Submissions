#include<stdio.h>

int main()
{
    long long int cnt,a,b,c,t,i,j,flag;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        cnt=a+b+c;
        if(cnt==180 && !((a==b && (b==90 || b==0))||(b==c && (b==90 || b==0))||(a==c && (a==90 || a==0))))
            printf("YES\n");
        else
            printf("NO\n");
            
    }
    return 0;
}