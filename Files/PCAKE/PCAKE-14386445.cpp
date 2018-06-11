#include<bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    typedef struct foo
    {
         int f[5];
         int u;
    }foo;
     
    int main()
    {
         ll ans,s;
         int gg,hh,nPr[1001]={0},pr[201],p,q,i,j,y,t=0,vv[1001];
         
         nPr[0]=nPr[1]=1;
         for (p=2; p<32; p++)
              if (!nPr[p])
                   for (q=p+p; q<=1000; q+=p)
                        nPr[q]=1;
         
         for(i=0;i<=1000;i++)
              if(!nPr[i])
        	          pr[t++]=i;
         
         cin>>gg;
         while(gg--)
         {
              cin>>hh;
              
              foo hm[hh];
              int good[hh]={0};
              
              for(i=0;i<t;i++)
                   vv[pr[i]]=-1;
              
              for(i=0;i<hh;i++)
              {
                   cin>>y;
                   s=0;
                   if(!nPr[y])
             	          hm[i].f[s++]=y;
             	     else
             	     {
                  	     for(j=0;pr[j]<=sqrt(y);j++)
                  	     {
                  	          p=0;
                  	          q=pr[j];
                  	          while(y%q==0 && p<=1)
                  	          {
                  	               p++;
                  	               y=y/q;
                  	          }
                  	          if(p==1)
                  	               hm[i].f[s++]=q;
                  	          if(p>1)
                  	          {
                  	               good[i]=1;
                  	               hm[i].u=0;
                  	               goto BRO;
                  	          }
                  	     }
                  	     if(!nPr[y])
                  	          hm[i].f[s++]=y;
             	     }
             	     hm[i].u=s;
             	     BRO:;
              }
              
              ans=0;
              p=-1;
              s=0;
              for(i=0;i<hh;i++)
              {
                   q=-1;
                   if(good[i]==0)
                        for(j=0;j<hm[i].u;j++)
                        {
                             if(vv[hm[i].f[j]]!=-1 && vv[hm[i].f[j]]>q)
                                  q=vv[hm[i].f[j]];
                             vv[hm[i].f[j]]=i;
                        }
                   else
                        q=i;
                   
                   if(q!=-1)
                   {
                        ans+=(s*(s+1))/2;
                        
                        for(j=p+1;j<=q;j++)
                             for(y=0;y<hm[j].u;y++)
                                  if(vv[hm[j].f[y]]<=q)
                                       vv[hm[j].f[y]]=-1;
                        
                        s=i-q-1;
                        ans-=(s*(s+1))/2;               
                        p=q;
                        s++;
                   }
                   else
                        s++;
              }
              ans+=(s*(s+1))/2;
              cout<<ans<<endl;
         }
         return 0;
    }