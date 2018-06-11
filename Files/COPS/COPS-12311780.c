#include<stdio.h>
#define ll long long

int main()
{
    ll t,i,j,x,y,m,b,c,k,k1,k2;
    scanf("%lld",&t);
    for(j=0;j<t;j++)
    {
        scanf("%lld%lld%lld",&m,&x,&y);
        ll a[101]={0};
        b=x*y;
        for(i=1;i<=m;i++)
        {
            scanf("%lld",&c);
            k1=(c-b)<1 ? 1 : (c-b);
            k2=(c+b)>100 ? 100 : (c+b);
            for(k=k1;k<=k2;k++)
                a[k]=1;
        }
        c=0;
        for(i=1;i<=100;i++)
            if(a[i]==0)
                c++;
        printf("%lld\n",c);
        
    }
    return 0;
}