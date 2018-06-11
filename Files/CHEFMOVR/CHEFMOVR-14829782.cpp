#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll gg,hh,k,i,j,xy[100005],a,x,y,z,ans;
    cin>>gg;
    while(gg--)
    {
        cin>>hh>>k;
        a=0;
        ans=0;
        for(i=0;i<hh;i++)
        {
            cin>>xy[i];
            a+=xy[i];
        }
        if(a%hh==0)
        {
            a/=hh;
            for(i=0;i<k;i++)
            {
                x=0;y=0;
                for(j=i;j<hh;j+=k)
                {
                    z=xy[j];

                    if(z<a)
                        x+=a-z;
                    else if(z>a)
                        y+=z-a;

                    if(x>y)
                    {
                        x-=y;
                        y=0;
                    }
                    else
                    {
                        y-=x;
                        x=0;
                    }
                    ans+=x+y;
                }
                if(x!=0 || y!=0)
                {
                    ans=-1;
                    break;
                }
            }
        }
        else
            ans=-1;
        cout<<ans<<endl;
    }
    return 0;
}