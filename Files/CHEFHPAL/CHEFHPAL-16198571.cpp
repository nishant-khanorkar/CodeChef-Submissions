#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll gg,hh,kk,i,j,k,m,n,f;
    cin>>gg;
    char dw[28],tw[]="abaabb";
    for(i='a';i<='z';i++)
        dw[i-'a']=i;
    while(gg--)
    {
        cin>>hh>>kk;
        dw[kk]='\0';
        if(kk==2)
        {
            if(hh<=6)
            {
                j=hh/2;
                cout<<max(j,hh-j)<<" ";
                for(i=0;i<j;i++)
                    cout<<dw[0];
                for(i=j;i<hh;i++)
                    cout<<dw[1];
            }
            else if(hh<=8)
            {
                cout<<(hh-1)/2<<" ";
                for(i=0;i<j;i++)
                    cout<<dw[0];
                cout<<dw[1];cout<<dw[0];
                for(i=j+2;i<hh;i++)
                    cout<<dw[1];
            }
            else
            {
                cout<<"4 ";
                j=hh/6;
                for(i=0;i<j;i++)
                    cout<<tw;
                j=hh%6;
                for(i=0;i<j;i++)
                    cout<<tw[i];
            }
        }
        else
        {
            kk==1?cout<<hh<<" ":cout<<1<<" ";
            for(i=0;i<hh/kk;i++)
                cout<<dw;
            for(i=0;i<hh%kk;i++)
                cout<<dw[i];
        }
        dw[kk]='a'+kk;
        cout<<endl;
    }
    return 0;
}