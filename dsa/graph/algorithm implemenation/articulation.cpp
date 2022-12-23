#include <bits/stdc++.h>
using namespace std;
void dfs1(int node , int parent , int &timer, vector<int>&vis,vector<int>&tin , vector<int>&low,vector<int>adj[],vector<int>&arti){
    vis[node]=1;
    tin[node]=low[node]=timer++;
    int child=0;
    for(auto it:adj[node]){

        if(it==parent){
            continue;
        }
        if(vis[it]==0){
            dfs1(it,node,timer,vis,tin,low,adj,arti);
            low[node]=min(low[node],low[it]);
            if(low[it]>=tin[node] && parent!=-1){
               arti[node]=1;
            }
            
            child++;
        }
        else{
            low[node]=min(low[node],tin[it]);
        }
    }

    if(parent==-1 && child>1){
        arti[node]=1;
    }
    
    
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
    vector<int>arti(n,0);
	for(int i = 0;i<n;i++) {
	    if(!vis[i]) {
	        dfs1(i, -1, timer,vis,tin,low,adj,arti); 
	    }
	}

   for(int i=0;i<n;i++){
       if(arti[i]==1){
           cout<<i<<" ";
       }
   }
	
	return 0;

}