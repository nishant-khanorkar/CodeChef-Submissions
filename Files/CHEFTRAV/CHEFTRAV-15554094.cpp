#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000000000


int main()
{
    ll gg,h,k,i,j,m,a,b;
    cin>>gg;
    while(gg--)
    {
        cin>>b;
        map<string,int> y;
        map<string,string> z;

        string r,f;
        for(i=0;i<b;i++)
        {
            cin>>r>>f;
            y[r]++;
            y[f]++;
            z[r]=f;
        }
        map<string,int>::iterator pp;
        int n=b+2;
        for(pp=y.begin();pp!=y.end();pp++)
        {
            //cout<<pp->first<<" "<<pp->second<<endl;
            if(pp->second<n && z[pp->first]!="")
            {
                r=pp->first;
                n=pp->second;
            }
        }
        j=0;
        do
        {
            cout<<r<<"-"<<z[r]<<" ";
            r=z[r];
            j++;
        }while(j!=b);
        cout<<endl;
    }
    return 0;
}