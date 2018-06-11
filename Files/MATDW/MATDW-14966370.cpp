#include<bits/stdc++.h>
using namespace std;


int main()
{
    int xu,xv,k,r[4],tx,type,x1,x2;
    char yu[10];
    cin>>xu>>xv;
    for(k=0;k<xv;k++)
    {
        cin>>r[0]>>r[1]>>r[2]>>r[3];
    }
    cin>>tx;
    while(xu--)
    {
        cout<<"g\n";
        fflush(stdout);
        cin>>type>>x1;
        if(type!=2)
          cin>>x2;
        if(type==0)
          cout<<"p s -1 -1\n";
        if(type==1)
          cout<<"p i -1 -1\n";
    }
    cout<<"end";
    return 0;
}