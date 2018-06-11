#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

typedef struct pp
{
    ll x;
    ll y;
    ll x1;
    ll y1;
}pp;

ll cmp(const void *a,const void *b)
{
     pp *u=(pp*)a;
     pp *v=(pp*)b;
     if(u->y > v->y)
     return 1;
     return -1;
}

double area(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3)
{
   return abs((double)(x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}
 
bool isInside(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3, ll x, ll y)
{   
   /* Calculate area of triangle ABC */
   double A = area (x1, y1, x2, y2, x3, y3);
   double A1 = area (x, y, x2, y2, x3, y3);
   double A2 = area (x1, y1, x, y, x3, y3);
   double A3 = area (x1, y1, x2, y2, x, y);
  
   if((ll)A1==0 || (ll)A2==0 || (ll)A3==0)
     return 0;
   return (A == A1 + A2 + A3);
}
int main()
{
     ll gg,hh,kk,i,j,k,p,c,d,v[100005][2],lx,rx,ly,ry,l,r,o,x,y;
     double a,b;
     ll st[10001],m;
     cin>>gg;
     while(gg--)
     {
          cin>>hh;
          a=b=0;
          
          /*
          lx=ly=pow(10,10);
          rx=ry=-pow(10,10);
          */
          
          for(i=0;i<hh;i++)
          {
               cin>>v[i][0]>>v[i][1];
               /*
               lx=min(lx,v[i][0]);
               ly=min(ly,v[i][1]);
               rx=max(rx,v[i][0]);
               ry=max(ry,v[i][1]);
               */
               a+=v[i][1];
          }
          /*
          pp u[hh];
          for(i=1;i<hh;i++)
          {
               if(v[i-1][1]<v[i][1])
               {
                    u[i-1].x=v[i-1][0];
                    u[i-1].y=v[i-1][1];
                    u[i-1].x1=v[i][0];
                    u[i-1].y1=v[i][1];
               }
               else
               {
                    u[i-1].x1=v[i-1][0];
                    u[i-1].y1=v[i-1][1];
                    u[i-1].x=v[i][0];
                    u[i-1].y=v[i][1];
               }
          }*
          
          if(v[hh-1][1]<v[0][1])
          {
               u[i-1].x=v[hh-1][0];
               u[i-1].y=v[hh-1][1];
               u[i-1].x1=v[0][0];
               u[i-1].y1=v[0][1];
          }
          else
          {
               u[i-1].x=v[hh-1][0];
               u[i-1].y=v[hh-1][1];
               u[i-1].x1=v[0][0];
               u[i-1].y1=v[0][1];
          }
          
          d=ceil((double)a/hh);
          */
          c=hh/10;
          
          m=0;
          for(i=2;i<hh;i++)
          {
               //0,i-1,i
               a=v[0][0]+v[i-1][0]+v[i][0];
               b=v[0][1]+v[i-1][1]+v[i][1];
               
               x=floor((a)/3);
               y=floor((b)/3);
               
          if(isInside(v[0][0],v[0][1],v[i-1][0],v[i-1][1],v[i][0],v[i][1],x,y))
          {
               cout<<x<<" "<<y<<endl;
               c--;
               if(c==0)
                    break;
          }
          if(isInside(v[0][0],v[0][1],v[i-1][0],v[i-1][1],v[i][0],v[i][1],x+1,y))
          {
               cout<<x+1<<" "<<y<<endl;
               c--;
               if(c==0)
                    break;
          }
          if(isInside(v[0][0],v[0][1],v[i-1][0],v[i-1][1],v[i][0],v[i][1],x,y+1))
          {
               cout<<x<<" "<<y+1<<endl;
               c--;
               if(c==0)
                    break;
          }
          if(isInside(v[0][0],v[0][1],v[i-1][0],v[i-1][1],v[i][0],v[i][1],x+1,y+1))
          {
               cout<<x+1<<" "<<y+1<<endl;
               c--;
               if(c==0)
                    break;
          }
          }
          
          if(c!=0)
          for(i=3;i<hh;i++)
          {
               //0,i-1,i
               a=v[1][0]+v[i-1][0]+v[i][0];
               b=v[1][1]+v[i-1][1]+v[i][1];
               
               x=floor((a)/3);
               y=floor((b)/3);
               
          if(isInside(v[1][0],v[1][1],v[i-1][0],v[i-1][1],v[i][0],v[i][1],x,y))
          {
               cout<<x<<" "<<y<<endl;
               c--;
               if(c==0)
                    break;
          }
          if(isInside(v[1][0],v[1][1],v[i-1][0],v[i-1][1],v[i][0],v[i][1],x+1,y))
          {
               cout<<x+1<<" "<<y<<endl;
               c--;
               if(c==0)
                    break;
          }
          if(isInside(v[1][0],v[1][1],v[i-1][0],v[i-1][1],v[i][0],v[i][1],x,y+1))
          {
               cout<<x<<" "<<y+1<<endl;
               c--;
               if(c==0)
                    break;
          }
          if(isInside(v[1][0],v[1][1],v[i-1][0],v[i-1][1],v[i][0],v[i][1],x+1,y+1))
          {
               cout<<x+1<<" "<<y+1<<endl;
               c--;
               if(c==0)
                    break;
          }
          }
     }
     return 0;
}