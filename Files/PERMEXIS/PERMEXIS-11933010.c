#include<stdlib.h>
#include<string.h>
#include<math.h>


#define ll long long
#define ld long double

#define slld(a) scanf("%lld",&a)
#define sd(a) scanf("%d",&a)
#define py printf("YES\n")
#define pn printf("NO\n")

#define fast(a,b,c) for(a=b;a<c;a++)

int main()
{
	ll i,j,t,T,N,a[200020],c,d,flag;

	

	slld(T);

	fast(i,0,T)
	{
	    slld(N);
	    fast(j,0,N)
	        slld(a[j]);
	        
	        
    	fast(c,1,N)
    	{
            d = c;
         
            while ( d > 0 && a[d] < a[d-1]) 
            {
              t  = a[d];
              a[d]   = a[d-1];
              a[d-1] = t;
         
              d--;
            }
        }
        
        flag=1;
        fast(j,1,N)
        {
            if(abs(a[j]-a[j-1])>1)
            {
                pn;
                flag=0;
                break;
            }
        }
        if(flag==1)
            py;
        
    }
		
	
	return 0;
}