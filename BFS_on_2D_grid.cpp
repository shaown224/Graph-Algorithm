#include<bits/stdc++.h>

using namespace std;

int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};

int graph[4][4];
int vis[4][4];
int N,M;

bool is_valid(int x,int y)
{
    if(x<0 || x>N-1)
    {
        return false;
    }
    if(y<0 || y>M-1)
    {
        return false;
    }
    if(vis[x][y] != 0)
    {
        return false;
    }

    return true;
}

void BFS_2D(int x,int y)
{
    queue<pair<int,int>>q;

    vis[x][y]=1;

    q.push({x,y});

    while (!q.empty())
    {

        int curr_x= q.front().first;
        int curr_y= q.front().second;
        cout<<graph[curr_x][curr_y]<<" ";
        q.pop();

        for(int i=0;i<4;i++)
        {
           
            if(is_valid(curr_x +dx[i],curr_y +dy[i]))
            {
                int new_x = curr_x +dx[i];
                int new_y = curr_y +dy[i];
                vis[new_x][new_y] = 1;
                q.push({new_x,new_y}); 
            }           
        }


        
    }
    

}

int main()
{


    cin>>N>>M;



    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin>>graph[i][j];
        }
        
    }

    int x,y;
    cin>>x>>y;

    BFS_2D(x,y);

    return 0;


}