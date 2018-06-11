#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     ll gg,hh,qq,i,j,p,q,aa,bb,sm,mk[1000007],x,y,z,h;
     
     cin>>gg;
     while(gg--)
     {
          cin>>hh>>qq;
          sm=((qq+1)*qq)/2 - hh;
          if(sm%2==1)
          {
               cout<<"impossible\n";
               continue;
          }
          sm/=2;
          aa=0;
          bb=0;
          
          for(i=1,j=qq;i<=j;i++,j--)
          {
               if(i%2)
               {
                    mk[i]=0;
                    mk[j]=0;
                    
                    aa+=i;
                    if(i!=j)
                         aa+=j;
               }
               else
               {
                    mk[i]=1;
                    mk[j]=1;
                    
                    bb+=i;
                    if(i!=j)
                         bb+=j;
               }
          }
          
          if(mk[hh]==0)
               aa-=hh;
          else
               bb-=hh;
          mk[hh]=2;
          y=max(aa,bb)-sm;
          
          int flag=0;
          if(aa>bb)
          {
               z=aa-bb;
               x=0;
          }
          else if(bb>aa)
          {
               z=bb-aa;
               x=1;
          }
          else
          {
               flag=1;
               goto CT;
          }
          
          /*
          if(z%2==0)
          {
               z/=2;
               if(z<=qq) 
               {
                    if(x==mk[z])
                    {
                         flag=1;
                         mk[z]=1-x;
                         goto CT;
                    }
               }
               z*=2;
          }*/
          
          if(y>0 && y<=qq && mk[y]==x && y!=hh)
          {
               flag=1;
               mk[y]=1-x;
               goto CT;
          }
          
          for(i=1;i<=qq;i++)
          {
               if(i-y>0 && i-y<=qq && mk[i]==x && mk[i-y]==1-x)
               {
                    mk[i]=1-x;
                    mk[i-y]=x;
                    flag=1;
                    break;
               }
               
               if(y-i>0 && y-i<=qq && mk[i]==mk[y-i] && mk[i]==x && i!=y-i)
               {
                    mk[i]=mk[y-i]=1-x;
                    //cout<<i<<" "<<y<<endl;
                    flag=1;
                    break;
               }
          }
          
          CT:;
          
          if(flag==0)
          {
               for(i=1;i<=qq;i++)
               {
                    if(mk[i]==1)
                    {
                         for(j=1;j<=qq;j++)
                         {
                              if(mk[j]==0)
                              {
                                   if(y+i-j>0 && y+i-j<=qq && mk[y+i-j]==0      && i!=y+i-j && j!=y+i-j)
                                   {
                                        mk[j]=1;
                                        mk[i]=0;
                                        mk[y+i-j]=1;
                                        flag=1;
                                        //cout<<j<<" "<<i<<" "<<y+i-j<<endl;
                                        goto RT;
                                   }
                              }
                         }
                    }
               }
          }
          RT:;
          aa=0;
          bb=0;
          
          if(flag!=0)
          {
               for(i=1;i<=qq;i++)
               {
                    /*
                    if(mk[i]==0)
                         aa+=i;
                    if(mk[i]==1)
                    bb+=i;
                    */
                    cout<<mk[i];
               }
               /*if(aa!=bb)
                    cout<<"\n+++++++ "<<hh<<endl;*/
          }
          else
          {
              // cout<<hh<<" **********";
               cout<<"impossible";
          }
          cout<<endl;
          //cout<<hh<<" "<<aa<<" "<<bb<<endl;
     }
     return 0;
}