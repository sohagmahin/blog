///Name: MD.Shamim Jahan Sohag
///University: Dhaka International University
///Fb: fb.com/sohagmahin
///Email: sohagmahin@yahoo.com
///Blog: www.sohagerblog.wordpress.com
#include<bits/stdc++.h>
using namespace std;
void bfs(int n,vector<int>adj[],int source)
{
    queue<int>q;
    bool visited[n+1];
    int distance[n+1];

    for(int i=1;i<=n;i++){
        visited[i]=false;
    }

    visited[source]=true;
    distance[source]=0;
    q.push(source);

    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<(int)adj[u].size();i++)
        {
            int v=adj[u][i];
            if(!visited[v]){
                visited[v]=true;
                q.push(v);
                distance[v]=distance[u]+1;
            }
        }
    }
    cout<<"\nShortest distance.\n"<<endl;
    for(int i=1;i<=n;i++){
        printf("source : %d to  %d = %d\n",source,i,distance[i]);
    }
}
int main()
{
    vector<int>adj[1000];
    int Node,Edge;
    printf("Enter Node & Edge: ");
    cin>>Node>>Edge;
    for(int i=0;i<Edge;i++)
    {
        cout<<"\nEnter u & v:";
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<"Enter source Node : ";
    int source;
    cin>>source;
    bfs(Node,adj,source);
    return 0;
}
