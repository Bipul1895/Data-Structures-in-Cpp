#include <bits/stdc++.h>

using namespace std;

void dfs(int src, vector<vector<int> >& adj, vector<bool>& vis) {
    vis[src]=true;
    cout << src << " ";
    for(int child:adj[src]) {
        if(!vis[child]) {
            dfs(child, adj, vis);
        }
    }
}

void bfs(int src, vector<vector<int> >& adj, vector<bool>& vis) {
    queue<int> q;
    q.push(src);
    vis[src]=true;

    while(!q.empty()) {
        int curr=q.front();
        q.pop();

        cout << curr << " ";

        for(int child:adj[curr]) {
            if(!vis[child]) {
                vis[child]=true;
                q.push(child);
            }
        }
    }
}

int main()
{
    int n,m;
    cout << "Enter number of vertices : ";
    cin>>n;
    cout << "Enter number of edges : ";
    cin>>m;

    vector< vector<int> > adj(n+1);
    vector<bool> vis(n+1, false);

    cout << "Provide edges : ";
    for(int i=0;i<m;i++) {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //cout << "Depth first search : \n";
    //dfs(0,adj,vis);

    cout << "Breadth first search : ";
    bfs(0,adj,vis);

}
