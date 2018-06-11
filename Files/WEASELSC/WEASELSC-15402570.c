#include<stdio.h>
#define ll long long

int main(){
    ll gg,hh,ii,i,j,k;
    scanf("%lld",&gg);
    while(gg--)
    {
        scanf("%lld",&hh);
        scanf("%lld",&ii);
        if(ii!=0)
          break;
        
        ll le[hh],s[hh];
        for(i=0;i<hh;i++)
        {
            scanf("%lld",&s[i]);
            le[i]=i-1;
        }
        j=0;
        for(i=0;i<hh;i++)
        {
            if(s[i]==0)
              continue;
            k=le[i];
            while(k>=0 && s[k]>=s[i])
            {
                k--;
            }
            le[i]=k;
            k=i+1;
            while(k<hh && s[k]>=s[i])
            {
                if(s[k]==s[i])
                  le[k]=le[i];
                k++;
            }
            if((k-le[i]-1)*s[i] > j)
              j=(k-le[i]-1)*s[i];
        }
        printf("%lld\n",j);
    }
}