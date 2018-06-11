#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll nn;
list<ll> adj[100005];

bool isReachable(ll ss, ll d)
{
     if (ss == d)
          return true;
 
     bool *visited = new bool[nn+1];
     for (ll i = 0; i < nn; i++)
          visited[i] = false;
 
     list<ll> queue;
     
     visited[ss] = true;
     queue.push_back(ss);
 
     list<ll>::iterator i;
     
     while (!queue.empty())
     { 
          ss = queue.front();
          queue.pop_front();
 
          for ( i = adj[ss].begin(); i != adj[ss].end(); ++i)
          {    
               if (*i == d)
                    return true;
               if (!visited[*i])
               {
                    visited[*i] = true;
                    queue.push_back(*i);
               }
          }
     }
     return false;
}

int main()
{
     ll i,j,k,mm,gg,u,v;
     cin>>nn>>mm;
     while(mm--)
     {
          cin>>i>>j;
          adj[i].push_back(j);
          adj[j].push_back(i);
     }
     cin>>mm;
     while(mm--)
     {
          cin>>u>>v;
          if(isReachable(u,v))
               cout<<"YES\n";
          else
               cout<<"NO\n";
     }
     return 0;
}