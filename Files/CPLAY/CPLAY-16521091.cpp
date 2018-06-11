#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll gg,hh,kk,i,j,k,a1,a2;
	char m1[25];
	while(cin>>m1)
    {
        a1=a2=0;
        for(i=0;i<10;i+=2)
        {
            if(m1[i]=='1')
                a1++;
            if(4-(i/2)+a1<a2)
            {
                cout<<"TEAM-B "<<i+1<<endl;
                goto DX;
            }
            if(5-(i/2)+a2<a1)
            {
                cout<<"TEAM-A "<<i+1<<endl;
                goto DX;
            }

            if(m1[i+1]=='1')
                a2++;
            if(4-(i/2)+a2<a1)
            {
                cout<<"TEAM-A "<<i+2<<endl;
                goto DX;
            }
            if(4-(i/2)+a1<a2)
            {
                cout<<"TEAM-B "<<i+2<<endl;
                goto DX;
            }
        }
        
        for(i=10;i<20;i+=2)
        {
            if(m1[i]=='1')
                a1++;
            if(m1[i+1]=='1')
                a2++;
            if(a1>a2)
            {
                cout<<"TEAM-A "<<i+2<<endl;
                goto DX;
            }
            else if(a2>a1)
            {
                cout<<"TEAM-B "<<i+2<<endl;
                goto DX;
            }
        }
        cout<<"TIE"<<endl;
        DX:;
    }
	return 0;
}