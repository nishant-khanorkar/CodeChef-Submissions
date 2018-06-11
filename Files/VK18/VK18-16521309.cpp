#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll gg,hh,kk,i,j,k,m,a1,a2;

	ll ab[2000007],ans[1000007];

	ab[0]=0;
	for(i=1;i<=2000005;i++)
    {
        j=i+1;
        a1=a2=0;
        while(j>0)
        {
            m=j%10;
            if(m%2)
                a1+=m;
            else
                a2+=m;
            j/=10;
        }
        ab[i]=abs(a1-a2)+ab[i-1];
    }

    ans[1]=2;
    for(i=2;i<=1000001;i++)
        ans[i]=ans[i-1]+2*(ab[2*i-1]-ab[i-1])-(ab[2*i-1]-ab[2*i-2]);

	cin>>gg;
	while(gg--)
    {
        cin>>hh;
        cout<<ans[hh]<<endl;
    }
	return 0;
}