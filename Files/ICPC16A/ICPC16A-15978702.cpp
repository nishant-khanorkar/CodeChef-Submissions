#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ll t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a==c)
        {
            if(b<d)
                cout<<"up"<<endl;
            else
                cout<<"down"<<endl;
            continue;
        }
        if(b==d)
        {
            if(a<c)
                cout<<"right"<<endl;
            else
                cout<<"left"<<endl;
            continue;
        }
        cout<<"sad"<<endl;
    }
    return 0;
}