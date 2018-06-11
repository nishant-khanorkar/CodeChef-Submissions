#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
 
#define slld(a) scanf("%lld",&a)

ll min(ll a,ll b)
{
     if(a<b)
          return a;
     else
          return b;
}

int main()
{
     ll t,n,l,i,j,al4,al7,a4,a7,bl4,bl7,b4,b7,c4,c7;
     char a[20001],b[20001],c,d;
     slld(t);
     while(t--)
     {
          scanf("%s%s",a,b);
          
          l=strlen(a);
          
          al4=al7=a4=a7=0;
          bl4=bl7=b4=b7=0;
          
          for(i=0;i<l;i++)
          {
               c=a[i];   d=b[i];
               
               if(c=='7')
                    a7++;
               else if(c=='4')
                    a4++;
               else if(c<'4')
                    al4++;
               else if(c>'4' && c<'7')
                    al7++;
                
                    
               if(d=='7')
                    b7++;
               else if(d=='4')
                    b4++;
               else if(d<'4')
                    bl4++;
               else if(d>'4' && d<'7')
                    bl7++;
          }
          
          c4=c7=0;
          
          if(a7>0)
          {
               j=min(a7,bl7);
               c7+=j;    a7-=j;    bl7-=j;
               if(a7>0)
               {
                    j=min(a7,bl4);
                    c7+=j;    a7-=j;    bl4-=j;
                    if(a7>0)
                    {
                         j=min(a7,b4);
                         c7+=j;    a7-=j;    b4-=j;
                         if(a7>0)
                         {
                              j=min(a7,b7);
                              c7+=j;    a7-=j;    b7-=j;
                         }
                    }
               }
          }
          
          if(b7>0)
          {
               j=min(b7,al7);
               c7+=j;    b7-=j;    al7-=j;
               if(b7>0)
               {
                    j=min(b7,al4);
                    c7+=j;    b7-=j;    al4-=j;
                    if(b7>0)
                    {
                         j=min(b7,a4);
                         c7+=j;    b7-=j;    a4-=j;
                         if(b7>0)
                         {
                              j=min(a7,b7);
                              c7+=j;    a7-=j;    b7-=j;
                         }
                    }
               }
          }
          
          if(a4>0)
          {
               j=min(a4,bl4);
               c4+=j;    a4-=j;    bl4-=j;
               if(a4>0)
               {
                    j=min(a4,b4);
                    c4+=j;    a4-=j;    b4-=j;
               }
          }
          
          if(b4>0)
          {
               j=min(b4,al4);
               c4+=j;    b4-=j;    al4-=j;
               if(b4>0)
               {
                    j=min(a4,b4);
                    c4+=j;    a4-=j;    b4-=j;
               }
          }
          
          for(i=0;i<c7;i++)
               printf("%d",7);
          for(i=0;i<c4;i++)
               printf("%d",4);
          printf("\n");
     }
     return 0;
}