#include <bits/stdc++.h>
#include <stdlib.h>
#define ll long long
using namespace std;

typedef struct foo
{
     ll len;
     ll max;
     ll kdis;
     ll pre;
}foo;

foo tpl;

int cmp(const void* a,const void* b)
{
     foo *k1=(foo *)a;
     foo *k2=(foo *)b;
     
     if(k1->pre < k2->pre)
          return 1;
     else
          return -1;
}

int main() 
{
	ll n,t,k,i,j,s00,s01,sm,x,y,pt;
	char a[1000005];
	cin>>t;
	while(t--)
	{
	     foo setp[1000005];
	     cin>>n>>k;
	     s00=s01=0;
	     for(i=0;i<n;i++)
	     {
	          scanf(" %c ",&a[i]);
	          if(i%2==0)
	          {
	               if(a[i]=='0')
	                    s00++;
	               else
	                    s01++;
	          }
	          else
	          {
	               if(a[i]=='0')
	                    s01++;
	               else
	                    s00++;
	          }
	     }
	     a[i]='\0';
	     
	     s00=n-s00;
	     s01=n-s01;
	     if(k>=s00 || k>=s01)
	     {
	          cout<<1<<endl;
	          continue;
	     }
	     n--;
	     pt=0;
	     for(i=0;i<n;i++)
	     {
	          if(a[i]==a[i+1])
	          {
	               sm=1;
	               while(a[i]==a[i+1])
	               {
	                    i++;
	                    sm++;
	               }
	               tpl.len=sm;
	               tpl.pre=sm;
	               tpl.max=(sm-1)/2;
	               tpl.kdis=0;
	               setp[pt++]=tpl;
	          }
	     }
	     qsort(setp,pt,sizeof(foo),cmp);
	     
	     while(k>0 && setp[0].kdis<setp[0].max)
	     {
	          k--;
	          setp[0].kdis++;
	          x=setp[0].len-setp[0].kdis;
	          y=setp[0].kdis+1;
	          sm=x/y + ( x%y==0 ? 0 : 1);
	          setp[0].pre=sm;
	          i=1;
	  
	          while(k>0 && i<pt && setp[i].kdis<setp[i].max && setp[i].pre>=sm)
	          {
	               k--;
	               setp[i].kdis++;
	               x=setp[i].len-setp[i].kdis;
     	          y=setp[i].kdis+1;
     	          setp[i].pre=x/y + (x%y==0 ? 0 : 1);
	               i++;
	          }
	          qsort(setp,pt,sizeof(foo),cmp);
	     }
          cout<<setp[0].pre<<endl;
	}
	return 0;
}