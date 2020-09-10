#include <bits/stdc++.h>

using namespace std;

void dijkstra(int src,vector< vector< pair<int,int> > >& adj,vector<bool>& explored,vector<int>& dist) {
    dist[src]=0;
    priority_queue< pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > pq;
    pq.push(make_pair(0,src));

    while(!pq.empty()) {
        int curr_node=pq.top().second;
        pq.pop();

        explored[curr_node]=true;

        for(pair<int,int> pr:adj[curr_node]) {
            int child_node=pr.first;
            int edge_weight=pr.second;

            if(dist[curr_node] + edge_weight < dist[child_node]) {
                dist[child_node] = dist[curr_node] + edge_weight;
                pq.push(make_pair(dist[child_node], child_node));
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

    vector< vector< pair<int,int> > > adj(n+1);
    vector<bool> explored(n+1, false);
    vector<int> dist(n+1, INT_MAX);

    cout << "Provide edges and weights: ";
    for(int i=0;i<m;i++) {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    dijkstra(1,adj,explored,dist);

    for(int i=1;i<=n;i++) {
        cout << "vertex : " << i << "  dist : " << dist[i] << "\n";
    }

    return 0;
}
