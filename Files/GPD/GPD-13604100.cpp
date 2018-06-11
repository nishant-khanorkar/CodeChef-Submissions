#include<bits/stdc++.h>
        using namespace std;
        #define ll long long
         
        unordered_map<ll,ll> n_pos;//node and its position in path[]
         
        ll path[300005][3],top;
        //prev_node - node_key - prev_node_position
           
        int main()
        {
             int nn,qq,i;
             
             ll la,uu,vv,kk,rr,e,op,aa,bb,prev,w,x,z;
             cin>>nn>>qq>>rr>>e;
             if(nn>5000 || qq>5000)
             	exit(0);
             nn--;
         
             for(i=0;i<nn;i++)
             {
                  cin>>uu>>path[i][0]>>path[i][1];
                  n_pos[uu]=i;
             }
             top=nn;
             for(i=0;i<nn;i++)
                  if((z=path[i][0])!=rr)
                       path[i][2]=n_pos[z];
          
             la=0;
             for(i=0;i<qq;i++)
             {
                  cin>>op;
                  op^=la;
                  if(op==0)
                  {
                       cin>>vv>>uu>>kk;
                       vv^=la;
                       uu^=la;
                       kk^=la;
           
                       path[top][0]=vv;
                       path[top][1]=kk;
                       path[top][2]=n_pos[vv];
                       n_pos[uu]=top++;
                  }
                  else
                  {
                       cin>>vv>>kk;
                       vv^=la;
                       kk^=la;
           
                       aa=bb=e^kk;
                       
                       w=n_pos[vv];
                       prev=vv;
                       while(prev!=rr)
                       {
                            x=path[w][1]^kk;
                            if(x<aa)
                                 aa=x;
                            if(x>bb)
                                 bb=x;
                            prev=path[w][0];
                            w=path[w][2];
                       }
                       
                       cout<<aa<<" "<<bb<<endl;
                       la=aa^bb;
                  }
             }
             return 0;
        }