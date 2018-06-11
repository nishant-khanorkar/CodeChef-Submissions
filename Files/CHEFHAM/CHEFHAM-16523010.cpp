#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll gg,hh,kk,i,j,k,m,a1,a2;
	ll ab[100005],ans[100005],x1[100005],x2[100005];
	cin>>gg;
	while(gg--)
    {
        cin>>hh;
        vector<ll> vt[100005];
        for(i=0;i<hh;i++)
        {
            cin>>k;
            ab[i]=k;
            ans[i]=k;
            vt[k].push_back(i);
        }

        a1=a2=0;
        for(k=0;k<100005;k++)
        {
            if(vt[k].size()==1)
            {
                x1[a1++]=vt[k][0];
            }
            if(vt[k].size()==2)
            {
                x2[a2++]=vt[k][0];
                x2[a2++]=vt[k][1];
            }
        }
        //sort(x1,x1+a1);
        //sort(x2,x2+a2);
        
        k=min(a1,a2);
        
        for(i=0;i<k;i++)
        {
            swap(ans[x1[i]],ans[x2[i]]);
            //swap(x1[i],x2[i]);
        }
        
        if(a1!=0)
            k=ans[x1[0]];
        for(i=1;i<a1;i++)
            ans[x1[i-1]]=ans[x1[i]];
        if(a1>1)
            ans[x1[a1-1]]=k;

        if(a2!=0)
        {
            k=ans[x2[0]];
            m=ans[x2[1]];
        }
        for(i=2;i<a2;i++)
            ans[x2[i-2]]=ans[x2[i]];
        if(a2>2)
        {
            ans[x2[a2-1]]=m;
            ans[x2[a2-2]]=k;
        }

        a1=0;
        for(i=0;i<hh;i++)
            if(ab[i]!=ans[i])
               a1++;
        cout<<a1<<endl;
        for(i=0;i<hh;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
	return 0;
}