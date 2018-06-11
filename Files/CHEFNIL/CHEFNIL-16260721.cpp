#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll gg,hh,kk,i,j,k,m,n,x,y,z,f,ct,exponent,p,po;

    int ans[501][51][51],last[501],cntt[51][51];

    cin>>gg>>hh;
    po=gg*gg;
    n=(gg*gg)/hh;
    last[0]=0;
    for(i=1;i<=hh;i++)
    {
        last[i]=last[i-1]+n;
        for(j=1;j<=gg;j++)
            for(k=1;k<=gg;k++)
                cin>>ans[i][j][k];
    }

    ct=0;
    for(j=1;j<=gg;j++)
        for(k=1;k<=gg;k++)
            cntt[j][k]=++ct;

    //if(hh>gg)
    {
        ct=0;
        n=(gg*gg)/hh;

        //for(i=1;i<=hh;i++)
        {
            i=1;
            m=0;
            x=-1;
            y=-1;
            z=-1;
            for(j=1;j<=gg;j++)
            {
                for(k=1;k<=gg;k++)
                {
                    if(ans[i][j][k]>z)
                    {
                        x=j;
                        y=k;
                        z=ans[i][j][k];
                    }
                    m++;

                    //if(m==last[i])
                    if(cntt[j][k]==po-(hh-i))
                    {
                        cout<<x<<" "<<y<<endl;
                        j=x;
                        k=y;
                        m=cntt[x][y];
                        x=-1;
                        y=-1;
                        z=-1;
                        i++;
                        if(i>hh)
                            goto END;;
                    }
                }
            }
        }

        /*for(j=1;j<=gg;j++)
            for(k=1;k<=gg;k++)
            {
                if(ct==hh)
                    goto END;
                cout<<j<<" "<<k<<endl;
                ct++;
            }*/
        END:;
    }
    return 0;
}