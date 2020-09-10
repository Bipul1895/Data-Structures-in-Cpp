#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void topological_sort(int n, vector<vector<int> >& adj, vector<int>& indegree) {

    queue<int> q;
    vector<bool> vis(n+1,false);

    for(int i=1;i<=n;i++) {
        if(indegree[i]==0) {
            q.push(i);
            vis[i]=true;
        }
    }

    while(!q.empty()) {
        int curr=q.front();
        q.pop();
        cout << curr << " ";
        for(int child:adj[curr]) {
            if(!vis[child]) {
                indegree[child]--;
                if(indegree[child] == 0) {
                    q.push(child);
                    vis[child]=true;
                }
            }
        }
    }

}

int main()
{
    int n;
    cout << "Enter number of vertices : \n";
    cin>>n;

    int m;
    cout << "Enter number of edges : \n";
    cin>>m;

    vector<vector<int> > adj(n+1);
    vector<int> indegree(n+1,0);
    cout << "Enter edges : \n";
    for(int i=0;i<m;i++) {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);//directed acyclic graph
        indegree[v]++;
    }

    topological_sort(n,adj,indegree);

    return 0;
}
