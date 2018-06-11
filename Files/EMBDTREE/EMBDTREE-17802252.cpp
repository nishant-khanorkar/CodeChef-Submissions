#include<bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct HU
{
     int po;
     int ff;
     int dd;
     int xx;
}HU;

typedef struct PTT
{
     ll u;
     ll v;
     int parent;
     int isLeaf;
     int index;
     ll od;
}PTT;

int cmpX(const void* a,const void* b)
{
     PTT *k1=(PTT*)a;
     PTT *k2=(PTT*)b;
     
     if(k1->v>k2->v)
          return 1;
     return -1;
}

int cmpI(const void* a,const void* b)
{
     PTT *k1=(PTT*)a;
     PTT *k2=(PTT*)b;
     
     if(k1->index>k2->index)
          return 1;
     return -1;
}

ll dis(ll a,ll b,ll c,ll d)
{
     return sqrt((c-a)*(c-a)+(d-b)*(d-b));
}
int main()
{
     int cd,i,j,k,a,b,j1,j2;
     ll x,y,z=-1,c;
     cin>>cd;
     vector<HU> vt[1001];
     PTT pt[1001];
     pt[0].u=-1;
     pt[0].v=-1;
     pt[0].index=-1;
     for(i=1;i<cd;i++)
     {
          pt[i].index=i;
          cin>>a>>b>>c;
          z=max(z,c);
          HU d1,d2;
          
          d1.po=a;
          d1.ff=b;
          d1.dd=c;
          vt[a].push_back(d1);
          
          d2.po=b;
          d2.ff=a;
          d2.dd=c;
          vt[b].push_back(d2);
     }
     pt[cd].index=cd;
     int ho=0,cnt=-1;
     for(i=1;i<=cd;i++)
     {
          a=vt[i].size();
          if(a>cnt)
          {
               cnt=a;
               ho=i;
          }
     }
     
     int vv[1001]={0};
     int level;
     HU yu;
     
     queue<HU> qq;
 
     j=0;
     if(vt[333].size()>=2)
 	j=1;
     a=156;//(vt[333][j]).ff;//2;//571%cd+7;
      
     yu.po=0;
     yu.ff=a;
     yu.dd=0;
     yu.xx=0;
     level=0;
 
     qq.push(yu);
     vv[a]=1;
 
     x=0;
     y=0;
     
     while (!qq.empty()) 
     {
          yu=qq.front();
          qq.pop();
 
          a=yu.po;
          b=yu.ff;
          c=yu.xx;
          
          pt[b].parent=a;
          if(vt[b].size()==1)
               pt[b].isLeaf=1;
          else
               pt[b].isLeaf=0;
          if(level==c)
          {
               pt[b].u=x;
               pt[b].v=y;
               pt[b].od=yu.dd;
               x++;
          }
          else
          {
               level=c;
               x=0;
               y+=z;
               pt[b].u=x;
               pt[b].v=y;
               pt[b].od=yu.dd;
               x++;
          }
 
          for (auto ii=vt[b].begin();ii!=vt[b].end();ii++) 
          {
               if (vv[(*ii).ff]==0) 
               {
                    (*ii).xx=c+1;
                    qq.push(*ii);
                    vv[(*ii).ff]=1;
               }
          }
     }
     for(i=0;i<cd;i++)
          pt[i]=pt[i+1];
     qsort(pt,cd,sizeof(PTT),cmpX);
     ll gh,rasta,sumA[1001]={0};
     for(i=0;i<cd;i++)
     {
          if(pt[i].u==0 && pt[i].v==0)
               continue;
          gh=pt[i].v;
          cnt=1;
          k=i+1;
          rasta=pt[i].od;
          for(j=i+1;j<cd;j++)
               if(pt[j].v==pt[i].v)
               {
                    cnt++;
                    k=j+1;
                    rasta=max(rasta,pt[j].od);
               }
               else
               {
                    k=j;
                    break;
               }
          gh=cnt/2;
          for(j=i;j<k;j++)
               pt[j].u-=gh;
          sumA[i]=z-rasta;     
          i=k-1;
     }
     for(i=1;i<cd;i++)
          sumA[i]+=sumA[i-1];
     for(i=0;i<cd;i++)
          pt[i].v-=sumA[i];
          
     qsort(pt,cd,sizeof(PTT),cmpI);
     ll x1,y1,x2,y2;
     for(i=0;i<cd;i++)
     {
          if(pt[i].u==0 && pt[i].v==0)
               continue;
          if(pt[i].isLeaf==0)
               continue;
          x2=pt[i].u;
          y2=pt[i].v;
          
          x1=pt[pt[i].parent-1].u;
          y1=pt[pt[i].parent-1].v;
          
          c=pt[i].od;
          if(x1==x2)
          {
               y2=y1+c;
          }
          else
          {
               double m1,m2,m3,m4,pp1,pp2,m5;
               m1=((double)(y2-y1))/(x2-x1);
               if(x2+1==x1)
                    m2=((double)(y2-y1))/(x2+0.95-x1);
               else
                    m2=((double)(y2-y1))/(x2+1-x1);
               if(x2-1==x1)
                    m3=((double)(y2-y1))/(x2-0.95-x1);
               else
                    m3=((double)(y2-y1))/(x2-1-x1);
               pp1=max(m2,m3);
               pp2=min(m2,m3);
               for(j=y2-1;j>=y1;j--)
               {
                    x=x1+floor((1.0*(j-y1))/m1);
                    if(dis(x1,y1,x,j)>=c && x!=x1)
                    {
                         m5=((double)j-y1)/(x-x1);
                         if(pp1<m5 && m5<pp2)
                         {
                              x2=x;
                              y2=j;
                         }
                    }
                    x=x1+ceil((1.0*(j-y1))/m1);
                    if(dis(x1,y1,x,j)>=c && x!=x1)
                    {
                         m5=((double)j-y1)/(x-x1);
                         if(pp1<m5 && m5<pp2)
                         {
                              x2=x;
                              y2=j;
                         }
                    }
               }
          }
          pt[i].u=x2;
          pt[i].v=y2;
     }
     for(i=0;i<cd;i++)
          cout<<pt[i].u<<" "<<pt[i].v<<endl;
     return 0;
}