#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll k,m,h,yy,nnn,ccc,bb[305],xx[90005],sumA,sumD;
	cin>>nnn;
	
	for(k=0;k<nnn;k++)
	{
	     for(m=0;m<nnn;m++)
	     {
	          cin>>yy;
	          bb[m]=yy;
	          xx[yy]=m;
	     }
	     
	     sort(bb,bb+nnn);
	     sumA=sumD=0;
	     for(m=0;m<nnn;m++)
	     {
	          yy=bb[m];
	          h=xx[yy]*xx[yy];
	          sumA+=abs(m*m-h);
	          sumD+=abs((nnn-1-m)*(nnn-1-m)-h);
	     }
	     if(sumA<=sumD)
	          for(m=0;m<nnn;m++)
	               cout<<bb[m]<<" ";
	     else
	          for(m=nnn-1;m>=0;m--)
	               cout<<bb[m]<<" ";
	     cout<<endl;
	}
	return 0;
}