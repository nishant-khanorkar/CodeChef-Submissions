#include<stdio.h>
#include<stdlib.h>
#define ll long long
 
#define slld(a) scanf("%lld",&a)
#define slld1(a,b) scanf("%lld%lld",&a,&b)
 

int main()
{
    ll t,m,n,l,i,j,f1,f2;
    
    slld(t);
    for(i=1;i<=t;i=i+1)
    {
        char v[1001][1001];
        slld1(n,m);
        for(j=0;j<n;j=j+1)
        {
            scanf("%s",v[j]);
        }
        for(j=0;j<m;j++)
        {   f1=f2=0;
            for(l=0;l<n;l++)
            {  
                if(v[l][j]=='B')
                {
                    f1=1;
                    continue;
                }
                if(v[l][j]=='W')
                {
                    if(f1==1 || j==0 || j==m-1)
                    {
                        printf("no\n");
                        goto zoom;
                    }
                    
                    else if(v[l][j-1]=='A' || v[l][j+1]=='A')
                    {
                        printf("no\n");
                        goto zoom;
                    }
                    f2=1;
                    continue;
                }
                if(v[l][j]=='A')
                {
                    if(f1==1 || f2==1)
                    {
                        printf("no\n");
                        goto zoom;
                    }
                    if(j>0)
                    {
                        if(v[l][j-1]=='W')
                        {
                            printf("no\n");
                            goto zoom;
                        }
                    }
                    if(j<m-1)
                    {
                        if(v[l][j+1]=='W')
                        {
                            printf("no\n");
                            goto zoom;
                        }
                    }
                }
            }
        }
        printf("yes\n");
        zoom : continue;
    }
    return 0;
}