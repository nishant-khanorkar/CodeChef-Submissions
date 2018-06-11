#include<bits/stdc++.h>
#define ll long long int
using namespace std;

typedef struct PTS
{
    ll x;
    ll y;
}PTS;

int main()
{
	ll gg,hh,kk,i,j,k,m,a1,a2,a3,c,d1,d2,ans,p,q,r,s;

	PTS x1[1001],x2[1001];
	cin>>hh;
    while(hh--)
    {
        cin>>a1>>a2;
        for(i=0;i<a1;i++)
            cin>>x1[i].x>>x1[i].y;
        for(i=0;i<a2;i++)
            cin>>x2[i].x>>x2[i].y;

        ans=3000;
        for(i=0;i<a1;i++)
        {
            for(j=0;j<a2;j++)
            {
                d1=x2[j].y-x1[i].y;
                d2=x2[j].x-x1[i].x;
                c=x2[j].y*x1[i].x - x2[j].x*x1[i].y;

                p=q=r=s=0;
                for(k=0;k<a1;k++)
                {
                    m= x1[k].y*d2 - x1[k].x*d1 + c;
                    if(m<0)
                        p++;
                    else if(m>0)
                        q++;
                }

                for(k=0;k<a2;k++)
                {
                    m= x2[k].y*d2 - x2[k].x*d1 + c;
                    if(m<0)
                        r++;
                    else if(m>0)
                        s++;
                }

                ans=min(ans,min(p+s,q+r));
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}