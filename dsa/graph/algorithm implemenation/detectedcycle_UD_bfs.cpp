#include <bits/stdc++.h>
using namespace std;
class Solution{

    public:
    bool CheckForCycle(int s , int v , vector<int>adj[] , vector<int>&visited){


        queue<pair<int,int>>q;
        visited[s]=1;
        q.push({s,-1});
        while(!q.empty()){

            int node = q.front().first;
            int par = q.front().second;
            q.pop();
            

            vector<int> a=adj[node];
            for(auto i:a){

                if(visited[i]==0){
                    visited[i]=1;
                    q.push({i,node});
                }
                else if(par!=i){
                    return true;
                }
            }
        }
       return false;

    }

    bool isCycle(vector<int>adj[] ,int V){

        vector<int>visited(V,0);
        for(int i=0;i<V;i++){
            if(visited[i]==0){

                if(CheckForCycle(i,V,adj,visited)) return true;
            }
        }

        return false;
    }

};
int main(){


    int V , e;
    cin >> V >> e;
    vector<int>adj[V];
    for(int i=0;i<e;i++){
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    Solution obj;
    bool ans = obj.isCycle(adj,V);
    if(ans==0){
        cout<<"No"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

}