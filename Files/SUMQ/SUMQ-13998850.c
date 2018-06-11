#include<stdio.h>
#include<stdlib.h>

#define ll long long
#define M 1000000007

int cmp(const void* p1, const void* p2) 
{
     return *(ll *)p1 > *(ll *)p2 ? 1 : -1 ;
}

int main() 
{
	ll gg,xx,yy,zz,i,j,k;
	ll a1[100005],b1[100005],c1[100005],s1[100005],s3[100005],t,ans;
	scanf("%lld",&gg);
	while(gg--)
	{
	     scanf("%lld%lld%lld",&xx,&yy,&zz);
	     
	     for(i=0;i<xx;i++)
	          scanf("%lld",&a1[i]);
	     for(i=0;i<yy;i++)
	          scanf("%lld",&b1[i]);
	     for(i=0;i<zz;i++)
	          scanf("%lld",&c1[i]);
	          
	     qsort(a1,xx,sizeof(ll),cmp);
	     qsort(b1,yy,sizeof(ll),cmp);
	     qsort(c1,zz,sizeof(ll),cmp);
	     
	     s1[0]=a1[0];
	     s3[0]=c1[0];
	     
	     t=b1[yy-1];
	     
	     j=-1;
	     if(a1[0]<=t)
	          j=0;
	     k=-1;
	     if(c1[0]<=t)
	          k=0;
	     
	     for(i=1; i<xx && a1[i]<=t ;i++)
	          s1[i]=s1[i-1]+a1[i],j=i;
	     for(i=1; i<zz && c1[i]<=t ;i++)
	          s3[i]=s3[i-1]+c1[i],k=i;
	    
	     ans=0;
	     for(i=yy-1;i>=0;i--)
	     {
	          t=b1[i];
	          while(j>=0 && a1[j]>t) j--;
	          if(j<0)
	               break;
	          while(k>=0 && c1[k]>t) k--;
	          if(k<0)
	               break;
	          
	          xx=s1[j]%M;
	          zz=s3[k]%M;
	          
	          ans= (ans + (((t*xx)%M) * (k+1))%M)%M;
	          ans= (ans + (xx*zz)%M )%M;
               ans= (ans + (((t*t)%M)*(((j+1)*(k+1))%M))%M)%M;
	          ans= (ans + (((t*zz)%M) * (j+1))%M)%M;
	     }
	     printf("%lld\n",ans);
	}
	return 0;
}