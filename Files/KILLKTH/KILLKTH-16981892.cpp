#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
typedef struct DX
{
    ll st;
    ll ed;
}DX;

char gr[200005];
ll p1,p2,q1,q2,x,y,z,i,j,k;

int cmp(const void* a,const void* b)
{
     DX *k1=(DX *)a;
     DX *k2=(DX *)b;
     
     p1=k1->st;
     p2=k1->ed;
     q1=k2->st;
     q2=k2->ed;
     
     if(p1==q1)
          return -1;
     
     for(i=p1,j=q1;i<=p2 && j<=q2;i++,j++)
     {
          if(gr[i]<gr[j])
               return -1;
          else if(gr[i]>gr[j])
               return 1;
     }
     if(p2-p1<q2-q1)
          return -1;
     else if(p2-p1==q2-q1)
          return 0;
     else
          return 1;
}

int main()
{
     ll gg,hh,qq,tp,pl,aa,bb,m,n,p;
     cin>>gr;
     
     k=strlen(gr);
     qq=(k*(k+1))/2;
     DX pol[qq];
     
     tp=0;
     for(i=0;i<k;i++)
     {
          for(j=i;j<k;j++)
          {
               pol[tp].st=i;
               pol[tp].ed=j;
               tp++;
          }
     }
     
     qsort(pol,tp,sizeof(DX),cmp);
     ll ac[tp][2];
     
     ac[0][0]=1;
     pl=ac[0][1]=1+pol[0].ed-pol[0].st;
     //cout<<0<<" "<<ac[0][0]<<" "<<ac[0][1]<<endl;

     for(i=1;i<tp;i++)
     {
          ac[i][0]=pl+1;
          pl=ac[i][1]=pl+1+pol[i].ed-pol[i].st;
          //cout<<i<<" "<<ac[i][0]<<" "<<ac[i][1]<<endl;
     }
     
     /*
     for(i=0;i<tp;i++)
     {
          cout<<endl<<ac[i][0]<<" "<<ac[i][1]<<" ";
          for(j=pol[i].st;j<=pol[i].ed;j++)
               cout<<gr[j];
     }
     */
     
     cin>>hh;
     m=0;
     char fg;
     while(hh--)
     {
          cin>>aa>>bb;
          
          n=(m*aa)%bb+1;
          
          x=0;
          y=tp-1;
          while(x<=y)
          {
               z=x+(y-x)/2;
               
               if(ac[z][0]<=n && n<=ac[z][1])
                    break;
               else if(n<ac[z][0])
                    y=z-1;
               else
                    x=z+1;
          }
          fg=gr[pol[z].st+n-ac[z][0]];
          cout<<fg<<endl;//<<" "<<ac[z][0]<<" "<<ac[z][1]<<endl;
          m+=fg;
     }
     return 0;
}