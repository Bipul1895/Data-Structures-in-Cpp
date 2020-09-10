#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int vertex1;
    int vertex2;
    int cost;
    Edge(int ver1,int ver2, int c) : vertex1(ver1), vertex2(ver2), cost(c) {
    }
};

bool cmp(Edge* edge1, Edge* edge2) {
    return edge1->cost < edge2->cost;
}

int root(int ver, vector<int>& id) {
    while(id[ver]!=ver) {
        ver=id[id[ver]];
    }
    return ver;
}

bool find_dsu(int A,int B,vector<int>& id) {
    int root_A=root(A,id);
    int root_B=root(B,id);
    return root_A==root_B;
}

void union_dsu(int A,int B,vector<int>& id, vector<int>& sz) {
    int root_A=root(A,id);
    int root_B=root(B,id);

    if(root_A==root_B) return;

    if(sz[root_A] > sz[root_B]) {
        id[root_B]=root_A;
        sz[root_A]+=sz[root_B];
    } else {
        id[root_A]=root_B;
        sz[root_B]+=sz[root_A];
    }

}

int kruskalMst(int n, vector<Edge*>& edge_list) {
    int cost_mst=0;
    sort(edge_list.begin(),edge_list.end(),cmp);

    vector<int> id(n+1);//for dsu data structure
    vector<int> sz(n+1,1);//for union_dsu function
    for(int i=0;i<=n;i++) id[i]=i;

    for(Edge* edge:edge_list) {
        int v1=edge->vertex1, v2=edge->vertex2, cost=edge->cost;
        if(!find_dsu(v1,v2,id)) {
            cost_mst+=cost;
            union_dsu(v1,v2,id,sz);
        }
    }
    return cost_mst;
}

int main()
{
    vector<Edge*> edge_list;

    int n;
    cout << "Number of nodes : \n";
    cin>>n;

    int e;
    cout << "Number of edges : \n";
    cin>>e;
    cout << "Enter edge details\n";
    for(int i=0;i<e;i++) {
        int u,v,w;
        cin>>u>>v>>w;
        edge_list.push_back(new Edge(u,v,w));
    }

    cout << "Minimum cost : " << kruskalMst(n, edge_list);

    cout << endl;
    return 0;
}
