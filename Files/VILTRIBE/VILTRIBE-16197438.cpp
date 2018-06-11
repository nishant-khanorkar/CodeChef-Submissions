#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll gg,hh,kk,i,j,k,m,n;
    cin>>gg;

    char er[100005],p,q;
    while(gg--)
    {
        cin>>er;
        m=strlen(er);
        p='P';
        for(i=0,hh=0,kk=0,n=0;i<m;i++)
        {
            q=er[i];
            if(q=='A')
            {
                hh++;
                if(p==q)
                    hh+=n;
                p=q;
                n=0;
            }
            else if(q=='B')
            {
                kk++;
                if(p==q)
                    kk+=n;
                p=q;
                n=0;
            }
            else
                n++;
        }
        cout<<hh<<" "<<kk<<endl;
    }
    return 0;
}