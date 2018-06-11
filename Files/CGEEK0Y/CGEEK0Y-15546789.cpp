#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000000000

int main()
{
    ll gg,h,k,i,j,m;
    cin>>gg;
    while(gg--)
    {
        cin>>m;
        int y[10]={0};
        j=0;
        if(m==0)
        {
            cout<<"INSOMNIA"<<endl;
            continue;
        }
        for(i=1;j!=10;i++)
        {
            k=m*i;
            while(k>0)
            {
                h=k%10;
                if(!y[h])
                    j++;
                y[h]=1;
                k/=10;
            }
        }
        i--;
        cout<<m*i<<endl;
    }
    return 0;
}