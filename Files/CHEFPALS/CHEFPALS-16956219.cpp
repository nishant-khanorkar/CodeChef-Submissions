#include<bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct rpm
{
     int x;
     int y;
}rpm;

int cmp(const void* p,const void* q)
{
     rpm *k1=(rpm *)p;
     rpm *k2=(rpm *)q;
     if(k1->x > k2->x)
          return 1;
     return -1;
}

int main()
{
     int i,j,k,hh,gg,qq,tn[1005],pn[1005],plc[1005]={0},a,b,c,d,e;
     char ps[1005][1005],fx[1005];
     rpm ans[1005],seq[1005];
     
     cin>>hh;
     for(i=0;i<hh;i++)
          cin>>tn[i];
     for(i=0;i<hh;i++)
     {
          cin>>pn[i];
          ans[i].x=tn[i]-pn[i];
          ans[i].y=i+1;
     }
     
     qsort(ans,hh,sizeof(rpm),cmp);
     vector<rpm> v1;
     vector<rpm> v2;
     
     for(i=0;i<hh;i++)
     {
          if(i+1<hh && ans[i].x==ans[i+1].x)
          {
               v1.push_back(ans[i]);
               
               //cout<<"hello "<<ans[i].y<<endl;
               
               e=ans[i].y;
               plc[e]=1;
               d=tn[e-1];
               c=pn[e-1];
               
               for(j=0;j<d;j++)
               {
                    ps[e][j]='w';
                    if(j%2==1 && c>0)
                    {
                         ps[e][j]='b';
                         c--;
                    }
               }
               j=d-1;
               while(c>0)
               {
                    if(ps[e][j]=='w')
                    {
                         ps[e][j]='b';
                         c--;
                    }
                    j--;
               }
               ps[e][d]='\0';
               
               v1.push_back(ans[i+1]);
               i++;
               
               //cout<<"hellollll "<<ans[i].y<<endl;
               
               e=ans[i].y;
               plc[e]=1;
               d=tn[e-1];
               c=pn[e-1];
               
               for(j=0;j<d;j++)
                    ps[e][j]='w';
               
               for(j=d-2;j>=0;j-=2)
               {
                    if(c>0)
                    {
                         ps[e][j]='b';
                         c--;
                    }
                    else
                         break;
               }
               
               //cout<<"jkdbkfjdbk "<<c<<" "<<ans[i].y<<endl;
               
               j=0;
               while(c>0)
               {
                    if(ps[e][j]=='w')
                    {
                         ps[e][j]='b';
                         c--;
                    }
                    j++;
               }
               ps[e][d]='\0';
          }
          else
               v2.push_back(ans[i]);
     }
     
     for(i=1,j=hh,k=0;k<v1.size();k+=2,i++,j--)
     {
          seq[i]=v1[k];
          seq[j]=v1[k+1];
     }
     
     for(k=0;k<v2.size();k++,i++)
          seq[i]=v2[k];
     
     for(i=1;i<=hh;i++)
     {
          if(plc[i]==1)
               printf("%s",ps[i]);
          else
          {
               for(j=1;j<=pn[i-1];j++)
                    cout<<"b";
               for(j=1;j<=tn[i-1]-pn[i-1];j++)
                    cout<<"w";    
          }
          cout<<endl;     
     }
     
     for(i=1;i<=hh;i++)
          cout<<seq[i].y<<" ";
     return 0;
}