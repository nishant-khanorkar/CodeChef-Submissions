#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 100000000000000007
 
int main()
{
     ll i,j,ttq,nnq,kkq,xxq,mmq,ssq,a,b,c,u,v,weight;
    
     cin>>ttq;
     list<pair<ll,ll>> *adjacencyList;
     pair<ll,ll> tmp;
     list<pair<ll,ll>>::iterator iii;
     while(ttq--)
     {
          cin>>nnq>>kkq>>xxq>>mmq>>ssq;
          adjacencyList = new list<pair<ll,ll>>[nnq+1];
         
          for(i=0;i<mmq;i++)
          {
               cin>>a>>b>>c;
               adjacencyList[a].push_back(make_pair(b,c));
               adjacencyList[b].push_back(make_pair(a,c));
          }
          
          for(i=1;i<=kkq;i++)
          {
               adjacencyList[0].push_back(make_pair(i,xxq));
               adjacencyList[i].push_back(make_pair(0,0));
          }
          set<pair<ll,ll>> PuDuVu;
      
          vector<ll> minDis(nnq+1,INF);
      
          PuDuVu.insert(make_pair(0,ssq));
          minDis[ssq] = 0;
               
          while (!PuDuVu.empty())
          {
               tmp = *(PuDuVu.begin());
               PuDuVu.erase(PuDuVu.begin());
      
               u = tmp.second;
               
               for(iii=adjacencyList[u].begin();iii!= adjacencyList[u].end();++iii)
               {
                    v=(*iii).first;
                    weight=(*iii).second;
      
                    if (minDis[v] > minDis[u] + weight)
                    {
                         if(minDis[v] != INF)
                              PuDuVu.erase(PuDuVu.find(make_pair(minDis[v],v)));
      
                         minDis[v]=minDis[u]+weight;
                         PuDuVu.insert(make_pair(minDis[v],v));
                    }
               }
          }
          
          for(i=1;i<=nnq;i++)
               cout<<minDis[i]<<" ";
          cout<<endl;
     }
     return 0;
}