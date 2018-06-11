#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll gg,hh,kk,i,j,k,m,n,ct,exponent;
    ll x[102][4];
    char y[15],z[15];
    char p[102][2];
    cin>>gg;
    while(gg--)
    {
        cin>>hh;
        int vv[hh+2]={0};
        for(i=1;i<=hh;i++)
        {
            cin>>x[i][0]>>x[i][1]>>x[i][2]>>x[i][3]>>y>>z;
            p[i][0]=y[0];
            p[i][1]=z[0];

            int flag=0;
            for(j=1;j<i;j++)
            {
                if(vv[j]==0)
                if(p[i][0]==p[j][0] && ((p[i][1]==p[j][1] && p[i][1]=='r') || (p[i][1]=='b' && p[j][1]=='w') || (p[i][1]=='w' && p[j][1]=='b') ))
                {
                    if( x[i][3]==x[j][3])
                    {
                        if(x[j][1]<=x[i][0] && x[i][0]<=x[j][2] && x[i][1]<=x[j][0] && x[j][0]<=x[i][2])
                        {
                            vv[i]=1;
                            vv[j]=1;
                            flag=1;
                            break;
                        }
                    }
                }
            }
            if(flag==1)
                cout<<j<<endl;
            else
                cout<<"wait"<<endl;
        }

    }
    return 0;
}