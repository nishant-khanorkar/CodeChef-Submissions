#include<bits/stdc++.h>
using namespace std;
int main()
{
    int gg,hh,xy[105],i,j,k,flag;
    cin>>gg;
    while(gg--)
    {
        cin>>hh;
        for(i=0;i<hh;i++)
            cin>>xy[i];
        flag=0;
        k=1;
        j=(hh-1)/2;
        hh--;
        int v[8]={0};
        for(i=0;i<=j;i++)
        {
            if(xy[i]!=k && v[k]==1)
                k++;
            if(!(xy[i]==k && xy[hh-i]==k && k<=7))
            {
                flag=1;
                break;
            }
            v[k]=1;
        }
        if(flag==1 || k!=7)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
    return 0;
}