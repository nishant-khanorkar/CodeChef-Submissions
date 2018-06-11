#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll minn2(ll a,ll b)
{
     return a<=b ? a : b;
}

ll minn3(ll a,ll b,ll c)
{
     if(a<=b)
     {
          if(a<=c)
               return a;
          else
               return c;
     }
     else
     {
          if(b<=c)
               return b;
          else
               return c;
     }
}

int main() 
{
	ll t,n,a,b,c,i,j,mata[100005],matb[100005],matc[100005],greM[100005],sum,sum1,bcnt,ccnt;
	cin>>t;
	while(t--)
	{
	     cin>>n;
	     a=n-1;
	     b=n-2;
	     c=n-3;
	     
	     for(i=1;i<=a;i++)
	          cin>>mata[i];
	     bcnt=0;      
	     for(i=1;i<=b;i++)
	     {
	          cin>>matb[i];
	          if(matb[i]==mata[i]+mata[i+1])
	               bcnt++;
	     }
	     ccnt=0;
	     for(i=1;i<=c;i++)
	     {
	          cin>>matc[i];
	          if(matc[i]==mata[i]+mata[i+1]+mata[i+2])
	               ccnt++;
	     }
	     
	     if(bcnt==b && ccnt==c)
	     {
	          sum=mata[1];
	          greM[1]=mata[1];
	          for(i=2;i<=a;i++)
	          {
	               greM[i]=mata[i]+greM[i-1];
	               sum+=greM[i];
	          }
	          sum1=sum;
	          for(i=1;i<=b;i++)
	          {
	               j=sum1-(n-i)*mata[i];
	               sum+=j;
	               sum1=j;
	          }
	          cout<<sum<<endl;
	          continue;
	     }
	     
	     sum=mata[a]+mata[b]+minn2(mata[a]+mata[b],matb[b]);
	     
	     for(i=1;i<=c;i++)
	     {
	          greM[i-1]=0;
	          greM[i]=mata[i];
	          greM[i+1]=minn2(mata[i+1]+greM[i],matb[i]);
	          sum+=(greM[i]+greM[i+1]);
	          for(j=i+2;j<=a;j++)
	          {
                    greM[j]=minn3(mata[j]+greM[j-1],matb[j-1]+greM[j-2],matc[j-2]+greM[j-3]);
                    sum+=greM[j];
	          }
	     }
	     cout<<sum<<endl;
	}
	return 0;
}