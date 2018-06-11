#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll gg,hh,kk,i,j,k,m,a1,a2;
	ll ab[100005];
	cin>>gg>>hh;
	for(i=1;i<=gg;i++)
        cin>>ab[i];
    while(hh--)
    {
        cin>>m>>a1>>a2;
        if(m==1)
            ab[a1]=a2;
        else
        {
            k=0;
            j=0;
            for(i=1;i<=a1;i++)
            {
                j^=ab[i];
                if(j==a2)
                    k++;
            }
            cout<<k<<endl;
        }
    }
	return 0;
}