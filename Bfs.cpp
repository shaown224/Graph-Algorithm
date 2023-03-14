#include<bits\stdc++.h>
using namespace std;


vector<int>graph[100];

int vis[100];


void BFS(int src)
{
    vis[src]=1;

    queue<int>q;
    q.push(src);

    while (!q.empty())
    {
        int curr = q.front();
        cout<<curr<<" ";
        q.pop();

        for(int adj:graph[curr])
        { 
            if(vis[adj] == 0)
            {
                vis[adj]=1;
                q.push(adj);
            }
        }
    }
    


}


int main()
{
    int n;
    cin>>n;

    int e;
    cin>>e;

    while (e--)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    BFS(2);
    
}