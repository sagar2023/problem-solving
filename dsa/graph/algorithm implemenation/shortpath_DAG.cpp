#include <bits/stdc++.h>
#define INF INT_MAX
using namespace std;
void add_edge(vector<pair<int,int>> adj[], int src, int dest, int w)
{
    adj[src].push_back({dest,w});
   
}
 
void dfs_tra(vector<pair<int,int>>adj[] ,vector<int>&vis,stack<int>&st , int node){

    vis[node]=1;
    for(auto i:adj[node]){

        if(vis[i.first]==0){
            dfs_tra(adj,vis,st,i.first);
        }
    }
    st.push(node);
    
}
void dfsshortpath(vector<pair<int,int>>adj[], int src , int V , int dest){

    vector<int>vis(V,0);
    stack<int>st;
    for(int i=0;i<V;i++){
        if(vis[i]==0){
            dfs_tra(adj,vis,st,i);
        }
    }

    int dist[V];

    for(int i=0;i<V;i++){
        dist[i]=INF;
        }

        dist[src]=0;
        while(!st.empty()){
            int node = st.top();
            st.pop();
            if(dist[node]!=INF){
                for(auto i:adj[node]){
                    if(dist[node]+i.second<dist[i.first]){
                        dist[i.first]=i.second+dist[node];
                    }
                }
            }
        }

        for (int i = 0; i < V; i++)
        (dist[i] == INF)? cout << "INF ": cout << dist[i] << " ";

}

// void printpath(vector<int>adj[] , int src , int dest,int V){

//     int pred[V];
//     bfstre(adj,src,V,dest,pred);
//     vector<int> path;
// 	int crawl = dest;
// 	path.push_back(crawl);
// 	while (pred[crawl] != -1) {
// 		path.push_back(pred[crawl]);
// 		crawl = pred[crawl];
// 	}
//     cout << "\nPath is::\n";
// 	for (int i = path.size() - 1; i >= 0; i--)
// 		cout << path[i] << " ";



// }
int main(){

    int v =6;

    vector<pair<int,int>>adj[v];
    add_edge(adj, 0, 1,5);
    add_edge(adj, 0, 2,3);
    add_edge(adj, 1, 3, 6);
    add_edge(adj, 1, 2, 2);
    add_edge(adj, 2, 4, 4);
    add_edge(adj, 2, 5, 2);
    add_edge(adj, 2, 3, 7);
    add_edge(adj,3, 4, -1);
    add_edge(adj, 4, 5, -2);
    
    int source = 1, dest = 5;

    dfsshortpath(adj,source,v,dest);

    // printpath(adj,source,dest,v);

}