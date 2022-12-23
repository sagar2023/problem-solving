#include <bits/stdc++.h>
using namespace std;
void dfs(vector<int>adj[] , vector<int>&vis , stack<int>&st,int node){

    vis[node]=1;
    for(auto it:adj[node]){
        if(vis[it]==0){
            dfs(adj,vis,st,it);
        }
    }
    st.push(node);
}


void revdfs(vector<int>trans[], vector<int>&vis,int node){

    cout<<node<<" ";
    vis[node]=1;
    for(auto it:trans[node]){
        if(vis[it]==0){
            revdfs(trans,vis,it);
        }
    }
}
int main(){

    int n , m;
    cin >> n >> m;
    vector<int>adj[n];
    for(int i=0;i<m;i++){
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
       // adj[v].push_back(u);
    }

    vector<int>vis(n,0);
    stack<int>st;

    for(int i=0;i<n;i++){
        if(vis[i]==0){
            dfs(adj,vis,st,i);
        }
    }

     vector<int>trans[n];
    for(int i=0;i<n;i++){
        vis[i]=0;
        for(auto it:adj[i]){
            trans[it].push_back(i);
        }
    }

    int k=1;
    while(!st.empty()){
        int node = st.top();
        st.pop();

        if(vis[node]==0){
           
            cout<<"SCC "<<k<<" :";
            k++;
            revdfs(trans,vis,node);
            cout<<endl;
            
        }

    }

}