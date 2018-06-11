#include<stdio.h>
#include<math.h>
     
#define ll long long
     
typedef struct hm
{
    int f[15];
    int t[15];
    int tt;
}hm;
     
int main() 
{
    	int gg,nq,p,q,r,s,i,j,y,z,nPr[1000001]={0},pr[1000001],top=0;
    	ll cc;
     
     nPr[0]=nPr[1]=1;
     for (p=2; p<1000; p++)
          if (!nPr[p])
               for (q=p+p; q<=1000000; q+=p)
                    nPr[q]=1;
    	
    	
    	for(i=0;i<1000001;i++)
    	{
    	     if(!nPr[i])
    	          pr[top++]=i;
    	}
    	
    	scanf("%d",&gg);
    	hm d[gg+1];
    	for(i=1;i<=gg;i++)
    	{
    	     scanf("%d",&y);
    	     s=0;
    	     if(!nPr[y])
    	     {
    	          d[i].f[s]=y;
    	          d[i].t[s++]=1;
    	     }
    	     else
    	     {
         	     for(j=0;pr[j]<=sqrt(y);j++)
         	     {
         	          p=0;
         	          q=pr[j];
         	          while(y%q==0)
         	          {
         	               p++;
         	               y=y/q;
         	          }
         	          if(p>0)
         	          {
         	               d[i].f[s]=q;
    	                    d[i].t[s++]=p;
         	          }
         	     }
         	     if(!nPr[y])
         	     {
         	          d[i].f[s]=y;
    	               d[i].t[s++]=1;
         	     }
    	     }
    	     d[i].tt=s;
    	}
    	
     scanf("%d",&nq);
    	
    	while(nq--)
    	{
    	     cc=0;
    	     scanf("%d%d%d%d",&p,&q,&r,&s);
    	     for(j=p;j<=q;j++)
    	     {
    	          z=d[j].tt;
    	          for(i=0;i<z;i++)
    	          {
    	               if(d[j].f[i]<r)
    	                    continue;
    	               if(d[j].f[i]>s)
    	                    break;
    	               cc+=d[j].t[i];
    	          }
    	     }
    	     printf("%lld\n",cc);
    	}
    	return 0;
}