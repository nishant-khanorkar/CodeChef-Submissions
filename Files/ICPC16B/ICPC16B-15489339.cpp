#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a;
        ll jj[4]={0};
        for(b=0;b<a;b++)
        {
            cin>>c;
            if(c==1)
                jj[1]++;
            else if(c==-1)
                jj[2]++;
            else if(c!=0)
                jj[3]++;
        }
        if((jj[3]>1)||(jj[1]==0 && jj[2]>1)||(jj[2] && jj[3]))
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
    return 0;
}