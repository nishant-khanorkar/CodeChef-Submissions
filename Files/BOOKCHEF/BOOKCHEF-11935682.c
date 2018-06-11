#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


#define ll long long
#define ld long double

#define slld(a) scanf("%lld",&a)
#define sd(a) scanf("%d",&a)
#define plld(a) printf("%lld\n",a)

#define fast(a,b,c) for(a=b;a<c;a++)

int main()
{
	ll i,j,k=0,N,M,a[1005],f[1005],p[1005],d,c,t,flag;
	char s[1005][102],val[102];
	

	slld(N);	slld(M);

	fast(i,0,N)
		slld(a[i]);
	
	fast(i,0,M)
	{
		scanf("%lld%lld%s",&f[i],&p[i],&s[i][0]);
		/*fast(j,0,N)
    		if(f[i]==a[j])
    		{   
    		    pop[k]=p[i];
    		    strcpy(&pos[k][0],&s[i][0]);
    		    k++ ,   i-- ,   M--;
    		}*/
	}
	
	/*fast(c,1,N)
	{
        d = c;
     
        while ( d > 0 && pop[d] < pop[d-1]) 
        {
          t          = pop[d];
          pop[d]   = pop[d-1];
          pop[d-1] = t;
          
          strcpy(val,&pos[d][0]);
          strcpy(&pos[d][0],&pos[d-1]);
          strcpy(&pos[d-1][0],val);
     
          d--;
        }
    }	*/
	
	fast(c,1,M)
	{
        d = c;
     
        while ( d > 0 && p[d] < p[d-1]) 
        {
          t          = p[d];
          p[d]   = p[d-1];
          p[d-1] = t;
          
          
          t          = f[d];
          f[d]   = f[d-1];
          f[d-1] = t;
          
          strcpy(val,&s[d][0]);
          strcpy(&s[d][0],&s[d-1][0]);
          strcpy(&s[d-1][0],val);
     
          d--;
        }
    }
	
	/*for(c=N-1;c>=0;c--)
	    printf("%s\n",&pos[c][0]);*/
	for(c=M-1;c>=0;c--)
	{
	    fast(j,0,N)
	        if(a[j]==f[c])
	            printf("%s\n",&s[c][0]);
	}	
	for(c=M-1;c>=0;c--)
	{
	    flag=1;
	    fast(j,0,N)
	        if(a[j]==f[c])
	        {
	            flag=0;
	            break;
	        }
	     if(flag==1)   
	     printf("%s\n",&s[c][0]);
	}
	return 0;
}