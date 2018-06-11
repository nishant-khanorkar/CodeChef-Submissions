#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll gg,hh,kk,i,j,k,a1,a2;
	char m1[105][105],g;
	for(i=0;i<100;i+=2)
    {
        for(j=0;j<100;j+=2)
        {
            m1[i][j]='R',m1[i][j+1]='G';
            m1[i+1][j]='G',m1[i+1][j+1]='R';
        }
    }
	cin>>gg;
	while(gg--)
    {
        cin>>hh>>kk;
        a1=a2=0;
        for(i=0;i<hh;i++)
            for(j=0;j<kk;j++)
            {
                scanf(" %c",&g);
                if(g=='R')
                {
                    if(g!=m1[i][j])
                        a1+=5;
                    else
                        a2+=5;
                }
                else
                {
                    if(g!=m1[i][j])
                        a1+=3;
                    else
                        a2+=3;
                }
            }
        cout<<min(a1,a2)<<endl;
    }
	return 0;
}