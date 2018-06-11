#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007

ll iM(ll p,ll q)
{
    ll ret=1;
    while(q){
        if(q&1)
            ret=(ret*p)%M;
        q>>=1;
        p=(p*p)%M;
    }
    q>>=1 ;
    p=(p*q)%M ;
    return ret;
}

int main()
{
	ll gg,hh,a,b,c,d,p,q,r,s,x,y,z,lll,dd,tt,i,j,v;
	cin>>gg;
	while(gg--)
	{
		cin>>lll>>dd>>tt;
		a=__gcd(lll,dd);
		z=lll;
		p=(dd/a)%M;
		q=(lll/a)%M;
		
		ll k[2][2]={0},h[2][2]={0},r[2][2]={0};
		h[0][0]=(2*p)%M;
		h[0][1]=-(q*q)%M;
		h[1][0]=1;
		
		b=iM(q,tt);
		b=iM(b,M-2);
		
		tt--;
		k[0][0]=k[1][1]=1;
		while(tt)
		{
			if(tt&1)
			{for(i=0;i<2;i++)
				{
					for(j=0;j<2;j++)
					{
						r[i][j]=0;
						for(v=0;v<2;v++)
							r[i][j]=((k[i][v]*h[v][j])%M+r[i][j])%M;
					}
				}
				for(i=0;i<2;i++)
					for(j=0;j<2;j++)
						k[i][j]=r[i][j];
			}
			
			tt=tt>>1;for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					r[i][j]=0;
					for(v=0;v<2;v++)
						r[i][j]=((h[i][v]*h[v][j])%M+r[i][j])%M;
				}
			}
			for(i=0;i<2;i++)
				for(j=0;j<2;j++)
					h[i][j]=r[i][j];
					
		}
		
		a=(((k[0][0]*p)%M + k[0][1]%M)%M + M)%M;
		a=(a*z)%M;
		
		c=(a*b)%M;
		cout<<c<<endl;
	}
	return 0;
}