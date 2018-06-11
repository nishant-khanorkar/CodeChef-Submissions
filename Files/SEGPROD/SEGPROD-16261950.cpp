#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 1000005

ll kk,primeMULT[15][1000005];

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    ll stk[20],mrk[20],prD[MX],rPr[MX],MZ[20];
    ll hh,v,ct,m,n,x,y;
   
    ll i,j,k,tp,gg,f,p,primeFact[20][MX],zero[MX];

    cin>>gg;
    while(gg--)
    {
        cin>>hh>>kk>>k;

        tp=-1;

        j=sqrt(kk);
        for(p=2;p<=j;p++)
            if(kk%p==0)
            {
                stk[++tp]=p;
                primeFact[tp][0]=0;
            }
        if(tp==-1)
        {
          stk[++tp]=kk;
          primeFact[tp][0]=0;
        }

        prD[0]=1;
        rPr[0]=invMOD(1);
        zero[0]=0;
        for(i=1;i<=hh;i++)
        {
            cin>>v;

            if(v!=0)
            {
            	zero[i]=zero[i-1];
                for(j=0;j<=tp;j++)
                {
                    f=0;
                    p=stk[j];
                    while(v%p==0)
                    {
                        f++;
                        v=v/p;
                    }
                    primeFact[j][i]=primeFact[j][i-1]+f;
                }
                prD[i]=(v*prD[i-1])%kk;
            }
            else
            {
            	zero[i]=zero[i-1]+1;
                for(j=0;j<=tp;j++)
                    primeFact[j][i]=primeFact[j][i-1];
                prD[i]=1;
            }
            rPr[i]=invMOD(prD[i]);
        }

        for(j=0;j<=tp;j++)
        {
            p=primeFact[j][hh];
            v=stk[j];
            primeMULT[j][0]=1;
            mrk[j]=p+1;
            MZ[j]=p+2;
            for(i=1;i<=p;i++)
            {
                primeMULT[j][i]=(primeMULT[j][i-1]*v)%kk;
                if(primeMULT[j][i]==0)
                {
                     MZ[j]=i;
                     break;
                }
                if(primeMULT[j][i]==primeMULT[j][1] && i!=1)
                {
                     mrk[j]=i-1;
                     break;
                }
            }
        }

        f=k/64+2;
        ll qy[f+9];
        for(i=0;i<f;i++)
            cin>>qy[i];

        ct=0;
        for(i=0;i<k;i++)
        {
            if(i%64==0)
            {
                m=(qy[i/64]+ct)%hh;
                n=(qy[1+i/64]+ct)%hh;
            }
            else
            {
                m=(x+ct)%hh;
                n=(y+ct)%hh;
            }
            if(m>n)
                swap(m,n);
            if(zero[n+1]>zero[m])
                ct=0;
            else
            {
                ct=(prD[n+1]*rPr[m])%kk;
                for(j=0;j<=tp;j++)
                {
                    if(primeFact[j][n+1]!=primeFact[j][m])
                    {
                         p=(primeFact[j][n+1]-primeFact[j][m]);
                         if(p>=MZ[j])
                         {
                              ct=0;
                              break;
                         }    
                    	v=p%mrk[j];
                    	if(v==0)
                      	   v=mrk[j];
                      	ct=(ct * primeMULT[j][v] )%kk;
                    }
                    
                }
                //ct=(ct*invMOD(p,primeFact[n+1]-primeFact[m],kk))%kk;
            }
            x=m;
            y=n;
            ct=(ct+1)%kk;
        }
        cout<<ct<<endl;
    }
    return 0;
}