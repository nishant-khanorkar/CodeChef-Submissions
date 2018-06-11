#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000000000

int main()
{
    ll gg,hh,kk,i,j,m,n;
    char y[100],z;
    cin>>gg;
    while(gg--)
    {
        cin>>y;
        m=0,n=0;
        j=strlen(y);
        for(i=0;i<j;)
        {
            kk=0;
            while(i<j && y[i]=='L')
            {
                i++;
                kk=1;
            }
            if(kk)
                m++;

            kk=0;
            while(i<j && y[i]=='R')
            {
                i++;
                kk=1;
            }
            if(kk)
                n++;
        }
        cout<<min(n,m)<<endl;;
    }
    return 0;
}