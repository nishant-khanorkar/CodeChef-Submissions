#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100005

//java.contains(Multiset)=Boolean.FALSE;T-T

multiset<ll>             ::iterator list1,list2;
multiset<pair<ll,ll> >   ::iterator m_pairIT;
vector<pair<multiset<ll> ::iterator,multiset<ll> ::iterator> > lis;
multiset<pair<ll,ll> > flis;
multiset<ll> tr[4*MAX];//merge sort tree

void insertE(int node,int start,int end,int i,ll a)
{
     if(i<start||i>end)
          return;
     tr[node].insert(a);
     if(start!=end)
     {
          int mid=start+(end-start)/2;
          insertE(2*node+1,start,mid,i,a);
          insertE(2*node+2,mid+1,end,i,a);
     }
}

void deleteE(int node,int start,int end,int i,ll a)
{
     if(i<start||i>end)
          return;
     tr[node].erase(tr[node].find(a));
     if(start!=end)
     {
          int mid=start+(end-start)/2;
          deleteE(2*node+1,start,mid,i,a);
          deleteE(2*node+2,mid+1,end,i,a);
     }
}

ll posi;
void query(int node,int start,int end,int left,int right)
{
     if(left<=start && right>=end)
     {
          lis.push_back(make_pair(--(tr[node].end()),tr[node].begin()));
          flis.insert(make_pair(*(--(tr[node].end())),posi));
          posi++;
          return;
     }
     if(end<left||start>right)
          return;
     int mid=start+(end-start)/2;
     query(2*node+1,start,mid,left,right);
     query(2*node+2,mid+1,end,left,right);
}

ll getNextME()
{
     ll tp;
     int ij;
     
     m_pairIT=flis.end(); 
     m_pairIT--;
     
     tp=m_pairIT->first;
     ij=m_pairIT->second;
     
     list1=(lis[ij]).first;
     list2=(lis[ij]).second;
     flis.erase(m_pairIT);
     
     if(list2!=list1)
     {
          flis.insert(make_pair(*(--list1),ij));
          lis[ij].first=list1;
          lis[ij].second=list2;
     }
     return tp;
}

int main()
{
     int gg,hh,i,j,k,type,xx,le,re;
     
     cin>>gg>>hh;
     ll r[gg],yy,x,y,z;
     for(i=0;i<gg;i++)
     {
          cin>>r[i];
          insertE(0,0,gg-1,i,r[i]);
     }
     
     while(hh--)
     {
          cin>>type;
          if(type==1)
          {
               cin>>xx>>yy;
               xx--;
               deleteE(0,0,gg-1,xx,r[xx]);
               r[xx]=yy;
               insertE(0,0,gg-1,xx,r[xx]);
          }
          else
          {
               posi=0;
               lis.clear();
               flis.clear();
               
               cin>>le>>re;
               le--;
               re--;
               
               if(re-le+1<3)
               {
                    cout<<"0"<<endl;
                    continue;
               }
               query(0,0,gg-1,le,re);
               x=getNextME();
               y=getNextME();
               z=getNextME();
               
               if(x+y>z && y+z>x && z+x>y) 
               {
                    yy=x+y+z;
                    cout<<yy<<endl;
                    continue;
               }
               
               for(j=re-le+1;j>3;j--)
               {
                    x=y; 
                    y=z;
                    z=getNextME();	
                    if(x+y>z && y+z>x && z+x>y) 
                    {
                         yy=x+y+z;
                         cout<<yy<<endl;
                         break;
                    }
               }
               if(j<=3)
                    cout<<0<<endl;
          }
     }
     return 0;
}