#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int gg,p,q,x,y,z;
    cin>>gg;
    while(gg--)
    {
        cin>>y>>z;
        q=1;
        for(p=2;p<=y;p++)
        {
            cin>>x;
            if(x<z)
            {
                z=x;
                q=p;
            }
        }
        cout<<q<<endl;
    }
    return 0;
}