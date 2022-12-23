#include <bits/stdc++.h>
using namespace std;
void dfs1(int node , int parent , int &timer, vector<int>&vis,vector<int>&tin , vector<int>&low,vector<int>adj[],vector<pair<int,int>>&vp){
    vis[node]=1;
    tin[node]=low[node]=timer++;
    for(auto it:adj[node]){

        if(it==parent){
            continue;
        }
        if(vis[it]==0){
            dfs1(it,node,timer,vis,tin,low,adj,vp);
            low[node]=min(low[node],low[it]);
            if(low[it]>tin[node]){
                //cout<<node<<" "<<it<<endl;
                vp.push_back({node,it});
            }
            
        }
        else{
            low[node]=min(low[node],tin[it]);
        }
    }
    
    
}

vector<pair<int,int>>dfs(int node , int parent , int &timer, vector<int>&vis,vector<int>&tin , vector<int>&low,vector<int>adj[]){

    vector<pair<int,int>>vp;
    dfs1(node,parent,timer,vis,tin,low,adj,vp);

    return vp;

}
int main(){
     int n, m;
    cin >> n >> m; 
	vector<int> adj[n]; 
	for(int i = 0;i<m;i++) {
	    int u, v;
	    cin >> u >> v; 
	    adj[u].push_back(v);
	    adj[v].push_back(u); 
	}
	
	vector<int> tin(n, -1);
	vector<int> low(n, -1); 
	vector<int> vis(n, 0); 
	int timer = 0; 
    //cout<<"bridge edges in graph"<<endl;
    vector<pair<int,int>>vp;
	for(int i = 0;i<n;i++) {
	    if(!vis[i]) {
	        vp=dfs(i, -1, timer,vis,tin,low,adj); 
	    }
	}

    cout<<"bridge edges in graph"<<endl;
    for(auto it:vp){
        cout<<it.first<<" "<<it.second<<endl;
    }

	
	return 0;

}