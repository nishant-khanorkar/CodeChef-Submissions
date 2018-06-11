#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007

int main()
{
    ll i,j,k,gg,p;
    cin>>gg;
    char yp[1005];
    while(gg--)
    {
        cin>>yp;
        j=strlen(yp);
        k=0;
        for(i=0;i<j;i++)
        {
            if(yp[i]<='9')
                k+=yp[i]-'0';
        }
        cout<<k<<endl;
    }
    return 0;
}