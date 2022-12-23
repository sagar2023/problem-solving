#include <bits/stdc++.h>
using namespace std;
bool detectcycle(int node , int par , vector<int>adj[], vector<int>&vis){

        vis[node]=1;
        vector<int>a=adj[node];
        for(auto i:a){
            if(vis[i]==0){
                if(detectcycle(i,node,adj,vis)) return true;
            }
            else if(i!=par){
                return true;
            }
        }

        return false;
}

bool isCycle(vector<int>adj[] , int V){

    vector<int>vis(V,0);
    for(int i=0;i<V;i++){
        if(vis[i]==0){
            if(detectcycle(i,-1,adj,vis)) return true;
        }
    }
    return false;
}
int main(){


    int V , e;
    cin >> V >>  e;
    vector<int>adj[V];
    for(int i=0;i<e;i++){
        int u ,  v;
         cin >> u >> v;
         adj[u].push_back(v);
         adj[v].push_back(u);

         
    }

    cout<<isCycle(adj , V);

}