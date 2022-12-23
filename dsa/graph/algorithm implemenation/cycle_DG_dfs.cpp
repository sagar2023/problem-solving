#include <bits/stdc++.h>
using namespace std;
bool cycledfs(vector<int>adj[] ,vector<int>&visited , vector<int>&dfsvis , int node){

            visited[node]=1;
            dfsvis[node]=1;

            vector<int>a=adj[node];
            for(auto i:a){
                if(visited[i]==0){
                    if(cycledfs(adj,visited,dfsvis,i)) return true;
                }
                else if(dfsvis[i]){
                    return true;
                }
            }
            dfsvis[node]=0;
            return false;
}

bool iscycle(vector<int>adj[] , int V){

    vector<int>visited(V,0);
    vector<int>dfsvis(V,0);

    for(int i=0;i<V;i++){
        
        if(visited[i]==0){
            if(cycledfs(adj,visited,dfsvis,i)) return true;
        }
    }

    return false;
  

}
int main(){


    int t;
    cin >> t;
    while(t--){

        int V , e; 
        cin >> V >> e;
        vector<int>adj[V];
        for(int i=0;i<e;i++){
            int u , v;
            cin >> u >> v;
            adj[u].push_back(v);
            
        }

        if(iscycle(adj,V)){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    }

}