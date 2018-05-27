///Name: MD.Shamim Jahan Sohag
///University: Dhaka International University
///Fb: fb.com/sohagmahin
///Email: sohagmahin@yahoo.com
///Blog: www.sohagerblog.wordpress.com
#include<bits/stdc++.h>
using namespace std;
void bfs(int n,vector<int>adj[],int source)
{
    int shortestPath[100];
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
                shortestPath[v]=u;///Store shortest path.
            }
        }
    }
    
    ///Finding shortest path.
    int dest,next;
    cout<<"Enter destination:";
    cin>>dest;
    cout<<"\nShortest Path  :";
    vector<int>v;
    v.push_back(dest);
    while(next!=source)
    {
        next=shortestPath[dest];
        v.push_back(next);
        dest=next;
    }
    sort(v.begin(),v.end());
    for(unsigned int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int>adj[1000];
    int Node,Edge;
    printf("Enter your Node & Edge: ");
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
/*
input: 
10 13
1 2
1 3
1 4
2 6
6 10
4 7
7 9
9 10
3 7
3 8
8 7
8 5
1
10

output: Shortest Path  :1 2 6 10



*/
