#include<stdio.h>
#include<string.h>

#define ll long long
#define slld(a) scanf("%lld",&a);


int main()
{
    ll i,j,k,t,n,z,x,l;
    char s[19];
    
    slld(n);
    
    for(i=0;i<n;i++)
    {
        slld(t);
        z=x=1;
        k=0;
        for(j=0;j<t;j++)
        {
            scanf("%s",s);
            if(k==0)
            {
                l=strlen(s);
                if(l>=3)
                {
                 if(s[l-1]=='n' && s[l-2]=='a' && s[l-3]=='m')
                    z++;
                 else
                    x++;
                }
                else
                    x++;
                    
                
                    if(z-x >= 2)
                    {printf("superheroes\n"); k=1;}
                     if(x-z >= 3)
                    {printf("villains\n"); k=1;}
            }
        }
        if(k==0)
            {printf("draw\n"); }
       
    }

    return 0;
}