#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ll long long 
 
int main()
{
    int z,n,k,s,c,m[11],po[11],rr2[11][5],cc2[11][5],rr1[11][5],cc1[11][5],i,j,row,col,r1,r2,c1,c2,p,q;
    ll pr[10][11],sum,t;
    
    scanf("%d",&n);
    for(z=1;z<=n;z++)
    {
          scanf("%d%d%d",&k,&s,&c);
          sum=0;
          for(j=1;j<=s;j++)
          {
               scanf("%d",&m[j]);
          }
          
          for(j=1;j<=s;j++)
               scanf("%d",&po[j]); 
          for(j=0;j<k;j++)
               for(i=1;i<=k;i++)
                    scanf("%lld",&pr[j][i]);
                    
          for(i=1;i<=s;i++)
          {
                sum = sum + m[i];
                t=po[i];
                    
                row=t/k;
                col=t%k; 
                
                if(col==0)
                {
                     col=k ;    
                     row--;
                }
                
                j=m[i];
                
                for(t=0;t<=j;t++)  
                {
                    r1=row-t+1;          
                    r2=row+t;
                    c1=col-t+1;
                    c2=col+t;
                    
                    if(r1<0)r1=0;
                    if(r2>k-1)r2=k-1;
                    if(c1<1)c1=1;
                    if(c2>k)c2=k;
                    
                    rr1[i][t]=r1;
                    rr2[i][t]=r2;
                    cc1[i][t]=c1;
                    cc2[i][t]=c2;
                }
          }   

          if(sum<=c)
          {
               ll v1[10][11]={0};
               for(i=1;i<=s;i++) 
               {
                    t=m[i];
                    r1=rr1[i][t];
                    r2=rr2[i][t];
                    c1=cc1[i][t];
                    c2=cc2[i][t];
                         
                    for(p=r1;p<=r2;p++)
                         for(q=c1;q<=c2;q++)
                              v1[p][q]=pr[p][q];
               }
               sum=0;
               for(j=0;j<k;j++)
                    for(i=1;i<=k;i++)
                         sum+=v1[j][i];
               
               printf("Case %d: %lld\n",z,sum);
               continue;
          }
          int m1[11],s1,u;
          ll max=0,num=0;
          while(1)
          {
               
               for(j=0;j<=4;j=j+1)
               {
                    t=num;
                    //printf("%lld ",num);
                    s1=s;
                    sum=0;
                    while(s1>0)
                    {
                         u=t%10;
                         if(u>m[s1])
                              goto ZOOM;
                         m1[s1--]=u;
                         t=t/10;
                         sum+=u;
                    }
                    if(sum==c)
                    {
                         ll v2[10][11]={0};
                         for(i=1;i<=s;i++) 
                         {
                                t=m1[i];
                                r1=rr1[i][t];
                                r2=rr2[i][t];
                                c1=cc1[i][t];
                                c2=cc2[i][t];
                              
                              for(p=r1;p<=r2;p++)
                                   for(q=c1;q<=c2;q++)
                                        v2[p][q]=pr[p][q];
                         }
                         sum=0;
                         for(p=0;p<k;p++)
                              for(q=1;q<=k;q++)
                                   sum+=v2[p][q];
                                   
                         if(sum>max)
                              max=sum;
                         
                    }
                    ZOOM:num++;
               }
               t=--num;
               for(i=0;t%10==4;i++)
				t=t/10;
			if(i==s)
			     break;
			t=pow(10,i);
			num=((num/t) + 1)*t;
          }
          printf("Case %d: %lld\n",z,max);
    }
    return 0;
}