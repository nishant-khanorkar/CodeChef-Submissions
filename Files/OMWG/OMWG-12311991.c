#include<stdio.h>
#define ll long long

int main()
{
    ll t,i,j,m,n,c,k;
    scanf("%lld",&t);
    for(j=0;j<t;j++)
    {
        scanf("%lld%lld",&n,&m);
        ll a[1000][1000]={0};
        c=0;
        for(i=0;i<n;i++)
            for(k=0;k<m;k++)
            {
                a[i][k]=1;
                if(i!=0 && a[i-1][k])
                    c++;
                if(i!=n-1 && a[i+1][k])
                    c++;
                if(k!=0 && a[i][k-1])
                    c++;
                if(k!=m-1 && a[i][k+1])
                    c++;
            }
        printf("%lld\n",c);
    }
    return 0;
}