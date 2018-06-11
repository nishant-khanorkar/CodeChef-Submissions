#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int gg,xx,yy,k,m,i,j,n,p,q;
    cin>>gg;

    int nPr[1000001]={0},sum[1000002];
    nPr[0]=nPr[1]=1;
     for (p=2; p<1000; p++)
          if (!nPr[p])
               for (q=p+p; q<=1000000; q+=p)
                    nPr[q]=1;

    sum[0]=0;
    for(i=1;i<=1000000;i++)
    {
        if(nPr[i]==0)
            sum[i]=1;
        else
            sum[i]=0;
        sum[i]+=sum[i-1];
    }
    while(gg--)
    {
        cin>>n>>m;
        cout<<sum[m]-sum[n-1]<<endl;
    }
    return 0;
}