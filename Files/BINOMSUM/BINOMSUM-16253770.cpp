#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 10000005

ll kk;

void hcfREM(ll a, ll b, ll *x, ll *y)
{
     if(a==0)
     {
          *x=0,*y=1;
          return;
     }
     ll x1, y1;
     hcfREM(b%a,a,&x1,&y1);
     *x=y1-(b/a)*x1;
     *y=x1;
}

ll invMOD(ll a)
{
    ll x,y,g;
    hcfREM(a,kk, &x, &y);
    return (x%kk + kk) % kk;
}

int main()
{
    ll i,j,gg,hh,k,p,q,r,fct[MX],ans1,ans2,ans;

    cin>>gg>>hh>>kk>>k;

    fct[0]=1;
    for(i=1;i<=10000001;i++)
    {
        fct[i]=(fct[i-1]*i)%kk;
        //inv[i]=invMOD(fct[i]);
    }

    while(k--)
    {
        cin>>p>>q>>r;

        ans1=(fct[q+r]*invMOD(fct[p+1]))%kk;
        ans1=(ans1*invMOD(fct[q+r-p-1]))%kk;

        if(p+1>q)
            ans2=0;
        else
        {
            ans2=(fct[q]*invMOD(fct[p+1]))%kk;
            ans2=(ans2*invMOD(fct[q-p-1]))%kk;
        }

        ans=(ans1-ans2+kk)%kk;
        cout<<(ans*hh)%kk<<endl;
    }

}