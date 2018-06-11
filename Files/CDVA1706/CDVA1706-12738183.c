#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
 
#define slld(a) scanf("%lld",&a)
#define slld1(a,b) scanf("%lld%lld",&a,&b)

int main()
{
     char s[3000005],p[100005];
     
     scanf("%s%s",s,p);
     
     ll n,m,i,j,ep,ep1,sp,k1,count=0,k,n1,sp1;
     
     m=strlen(s);
     n=strlen(p);
     
     sp=n/2;
     if(n%2==0)
          ep=sp;
     else
          ep=sp+1;
          
     k1=m-n;
     n1=n;
     //ep1=ep;
     sp1=sp;
     
     for(i=0 ; i<=k1 ; i++,sp++,ep++,n++)
     {
          /*
          for(j=i;j<i+sp ;j++)
               printf("%c",s[j]);
          
          printf("--");
              
          for(j=i+ep;j<i+n;j++)
               printf("%c",s[j]);
               
          printf("\n");
          */
          
          for(j=sp-1,k=sp1-1 ; j>=i ; j--,k--)
               if(s[j]!=p[k])
                    goto BRO1;
          
          count++;
          continue;
          
          BRO1: for(j=n-1,k=n1-1 ; j>=ep ; j--,k--)
                    if(s[j]!=p[k])
                         goto BRO2;
                    
          count++;
          BRO2:;
     }
     printf("%lld",count);
     return 0;
}