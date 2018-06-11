#include<bits/stdc++.h>
using namespace std;

int main()
{
    int gg,xx,yy,k,m,i,j,n;
    cin>>gg;
    while(gg--)
    {
        cin>>xx>>yy;
        m=0;
        int jj[yy+1]={0};
        for(i=0;i<xx;i++)
        {
            cin>>n;
            m=0;
            for(j=0;n>0;j++)
            {
                k=n%2;
                if(k)
                    m++;
                n/=2;
            }
            if(m==1)
                jj[j]=1;
        }
        int ans=0;
        for(i=1;i<=yy;i++)
            if(jj[i]==0)
                ans++;
        cout<<ans<<endl;
    }
    return 0;
}