#include <bits/stdc++.h>
using namespace std;

int prim_MST(vector<vector< pair<int,int> > >& adj, vector<bool>& vis, int n) {
    int cost=0;
    int num_nodes=0;
    priority_queue< pair<int,int>, vector< pair<int,int> >, greater< pair<int,int> > > pq;
    pq.push(make_pair(0,1));

    while (!pq.empty()) {
        int cost_curr=pq.top().first;
        int curr=pq.top().second;
        pq.pop();

        if(vis[curr]) continue;

        vis[curr]=true;

        cout << "curr element : " << curr << "\n";

        cost+=cost_curr;
        num_nodes++;

        if(num_nodes == n) break;

        for(pair<int,int> pr:adj[curr]) {
            int child=pr.first;
            int edge_weight=pr.second;
            if(!vis[child]) {
                pq.push(make_pair(edge_weight, child));
            }
        }
    }
    return cost;
}

int main()
{
    int n,m;
    cout <<"Enter number of vertices : ";
    cin>>n;
    cout<<"Enter number of edges : ";
    cin>>m;

    vector<vector< pair<int,int> > > adj(n+1);
    vector<bool> vis(n+1, false);
    cout << "Enter edges with weights : \n";

    for(int i=0;i<m;i++) {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    cout << "Cost of MST : " << prim_MST(adj,vis,n) << endl;

    return 0;
}
