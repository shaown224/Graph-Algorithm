#include <bits/stdc++.h>
using namespace std;
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define minus1 cout<<"-1"<<endl;
 
#define ll long long



vector<int>graph[1000];
map<int,int>in_degree;
int vis[1000];
int n,m;
vector<int>ans;

void DFS(int src)
{
    vis[src] = 1;
   
    for(int i=0;i<graph[src].size();i++)
    {
        int child=graph[src][i];
        if(vis[child] == 0)
        {
            DFS(child);

        }
    }
     ans.push_back(src);
    
}

void all_clear()
{
   for(int i=1;i<=n;i++)
   {
      graph[i].clear();
      vis[i]=0;
   }
   ans.clear();

  


}

int main ()
{
   

   while (1)
   {
      
      cin>>n>>m;

      if(n==0 && m==0)
      {
         return 0;
      }

      for(int i=0;i<m;i++)
      {
         int x,y;
         cin>>x>>y;

         graph[x].push_back(y);
       
      }


      DFS(1);

     

   }
   return 0;
   
   
  
}


