#include<bits/stdc++.h>
using namespace std;

int main()
{
    int gg,hh,kk,i,j,a,b;
    int x,y,ra,rb,rs;
    char xx[100005];

    cin>>gg;
    while(gg-- > 0)
    {
        cin>>xx>>a>>b;

        x=y=0;
        hh=strlen(xx);

        for(i=0;i<hh;i++)
        {
            if(xx[i]=='a')
                x++;
            else
                y++;
        }

        ra=rb=-100001;
        rs=-1;
        for(i=0,j=0;i<hh;i++,j++)
        {
            if(x>=y)
            {
                if((ra!=j-1) || (rs>=j-a) || (rb>=j-a))
                {
                    cout<<"a";
                    ra=j;
                    x--;
                }
                else
                {
                    if(y>0)
                    {
                        cout<<"b";
                        rb=j;
                        y--;
                    }
                    else
                    {
                        cout<<"*a";
                        rs=j++;
                        ra=j;
                        x--;
                    }
                }
            }
            else
            {
                if((rb!=j-1) || (rs>=j-b) || (ra>=j-b))
                {
                    cout<<"b";
                    rb=j;
                    y--;
                }
                else
                {
                    if(x>0)
                    {
                        cout<<"a";
                        ra=j;
                        x--;
                    }
                    else
                    {
                        cout<<"*b";
                        rs=j++;
                        rb=j;
                        y--;
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}