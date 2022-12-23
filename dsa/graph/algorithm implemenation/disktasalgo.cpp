#include <bits/stdc++.h>
using namespace std;

//#define pii pair<int,int>
vector<int> dikastas(vector<pair<int,int>>adj[] , int src , int V){

    vector<int>dis(V,INT_MAX);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

    dis[src]=0;
    pq.push({0,src});

    while (!pq.empty())
    {
        int prv = pq.top().first;
        int dist = pq.top().second;
        for(auto i:adj[prv]){
            int nextdist = i.second;
            int next = i.first;
            if(dist+nextdist<dis[next]){
                dis[next]=dist+nextdist;
                pq.push({dis[next],next});
            }
        }
    }

    return dis;
    
    
}
int main(){


    int V , e;
    cin >> V >> e;
    vector<pair<int,int>>adj[V];
    for(int i=0;i<e;i++){
        int u , v , w;
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    vector<int>a = dikastas(adj,1,V);

    for(auto i:a){
        cout<<i<<endl;
    }

}