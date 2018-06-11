#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll gg,hh,kk,xx[1000005],i,j;
    cin>>gg;
    while(gg--)
    {
        cin>>hh;
        for(i=0;i<hh;i++)
        {
            cin>>xx[i];
        }
        kk=0;
        for(i=0;i<hh;i++)
            for(j=i+1;j<hh;j++)
                if((xx[i]|xx[j]) <= max(xx[i],xx[j]))
                    kk++;
        cout<<kk<<endl;

    }
    return 0;
}