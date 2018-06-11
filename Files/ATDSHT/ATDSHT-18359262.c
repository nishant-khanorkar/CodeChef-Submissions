#include<stdio.h>
#include<string.h>
     
#define ll long long
     
int main() 
{
     ll gg,hh,i,j,k,n;
     char s[55],p[1000005];
     ll y[27]={0};
     k=0;
     scanf("%lld",&gg);
     while(gg--)
     {
          scanf("%s",s);
          j=strlen(s);
          k+=j;
          for(i=0;i<j;i++)
               y[s[i]-'A']++;
     }
     scanf("%s",p);
     n=strlen(p);
     if(n<k)
     {
          printf("-1");
          return 0;
     }
     ll z[27]={0};
     for(i=0;i<n;i++)
          z[p[i]-'A']++;
     hh=0;
     for(i=0;i<26;i++)
          z[i]-=y[i];
     
     for(i=0;i<26;i++)
          if(z[i]<0)
               hh+=(z[i]*-1);
     printf("%lld",hh);
    	return 0;
}