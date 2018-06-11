#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000000000

int main()
{
    int gg,hh,kk,i,j,m,n,ax[100005];
    char y[100005],z;
    cin>>gg;
    while(gg--)
    {
        cin>>m>>hh;
        int v[1001]={0};
        for(i=0;i<m;i++)
        {
            cin>>ax[i];
            v[ax[i]]++;
        }
        j=0;
        for(i=0;i<m;i++)
        {
            v[ax[i]]--;
            n=hh-ax[i];
            if(n>=1 && n<=1000 && v[n]>0)
            {
                j=1;
                break;
            }
            v[ax[i]]++;
        }
        if(j==1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}