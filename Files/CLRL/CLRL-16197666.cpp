#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll gg,hh,kk,i,j,k,m,n,f;
    cin>>gg;

    while(gg--)
    {
        cin>>hh>>kk;
        f=1;
        for(i=1,m=0,n=pow(10,10);i<hh;i++)
        {
            cin>>j;
            if(f)
                if(j>kk)
                    j<n?n=j:f=0;
                else
                    j>m?m=j:f=0;
        }
        cin>>j;
        !f?cout<<"NO\n":(m<j&&j<n?cout<<"YES\n":cout<<"NO\n");
    }
    return 0;
}