#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000000000

int main()
{
    ll i,j,k,t,n,m,ip[1005][1005],s,m1,sum[1005][1005];
    cin>>t;
    while(t--)
    {
        cin>>n>>m;

        for(i=0;i<n;i++)
        {
            s=0;
            m1=0;
            for(j=0;j<m;j++)
            {
                cin>>ip[i][j];
                s+=ip[i][j];
                sum[i][j]=s-m1;
                if(s>m1)
                    m1=s;
            }
        }
        for(i=0;i<m;i++)
        {
            s=0;
            m1=0;
            for(j=0;j<n;j++)
            {
                sum[j][i]+=s-m1;
                s+=ip[j][i];
                if(s>m1)
                    m1=s;
            }
        }
        for(i=n-1;i>=0;i--)
        {
            s=0;
            m1=0;
            for(j=m-1;j>=0;j--)
            {
                sum[i][j]+=s-m1;
                s+=ip[i][j];
                if(s>m1)
                    m1=s;
            }
        }
        ll ans=MAX;
        for(i=m-1;i>=0;i--)
        {
            s=0;
            m1=0;
            for(j=n-1;j>=0;j--)
            {
                sum[j][i]+=s-m1;
                if(sum[j][i]<ans)
                    ans=sum[j][i];
                s+=ip[j][i];
                if(s>m1)
                    m1=s;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}