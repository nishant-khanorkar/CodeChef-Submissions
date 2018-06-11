#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> prrr;
const ll PR_MX=10000000,RHS_MX=2000000000l;

ll inc_exc_SQRno(ll ii,ll val,ll kcx)
{
     ll sqqr=prrr[ii]*prrr[ii],newVal=sqqr*val,count;
     if(newVal>kcx)
          return 0;
 
     //Inclusion-Exclusion Principle
     count=kcx/(newVal);
     count+=inc_exc_SQRno(ii+1,val,kcx);
     count-=inc_exc_SQRno(ii+1,newVal,kcx);
     return count;
}
 
ll solveSQF(ll n)
{
     ll x=1,y=RHS_MX,z,kc;
     while(x<y)
     {
          z=x+(y-x)/2;
          kc=z-inc_exc_SQRno(0,1,z);
          if(kc<n)
               x=z+1;
          else
               y=z;
    }
    return x;
}
 
int main()
{
     bool prmArr[PR_MX+1];
     memset(prmArr,true,sizeof(prmArr));
 
     ll px,i,j,x,y,z,drg,adv,idx,mm;
     for(px=2;px*px<=PR_MX;px++)
          if(prmArr[px])
               for(i=px*2;i<=PR_MX;i+=px)
                    prmArr[i]=false;
 
     for(px=2;px<=PR_MX;px++)
          if(prmArr[px])
               prrr.push_back(px);
          
     cin>>drg; 
     //for(drg=1;drg<=62;drg++)
     {x=3;
     y=50000000;//1550520;
               
     while(x<=y)
     {
          z=x+(y-x)/2;
          mm=solveSQF(z)-z;
          if(mm+1==drg /*|| mm+2==drg || mm+3==drg*/)
               break;
          else if(mm>=drg)
               y=z-1;
          else
               x=z+1;
     }
     
     while(mm<drg)
     {
          adv=mm;
          idx=z++;
          mm=solveSQF(z)-z;
     }
     cout<<idx+drg;
          //ll ans=idx+drg;
          //cout<<ans/*adv+idx +mm-drg +1+mm-drg*/<<", ";
     }
     /*ll n = 1550519,mm;
     mm=solveSQF(n) ;
     cout << (mm)<< " "<<(mm-n)<<endl;
     cout<<sqrt(2550519)<<endl<<sqrt(10000000);*/
     return 0;
}