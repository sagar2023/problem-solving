#include <bits/stdc++.h>
using namespace std;


void bfs_ite(vector<int>vec[] , int n ){

   vector<int>visited(n+1,0);
    for(int i=1;i<=n;i++){
        if(visited[i]==0){
            visited[i]=1;
            queue<int>q;
            q.push(i);
            while(!q.empty()){

                int ele = q.front();
                q.pop();
                cout<<ele<<" ";
                vector<int>a=vec[ele];
                for(auto j:a){
                    if(visited[j]==0){
                        visited[j]=1;
                        q.push(j);
                    }
                }
            }
        }
    }
    

}


void bfs_rec(vector<int>vec[],vector<int>&visit,queue<int>q){

    if(q.empty()){
        return;
    }
    int ele=q.front();
    q.pop();
    cout<<ele<<" ";
    vector<int>a=vec[ele];
   for(auto j:a){
       if(visit[j]==0){
           visit[j]=1;
           q.push(j);
       }
   }
    bfs_rec(vec,visit,q);


}
void bfs(vector<int>vec[] , int n){

    vector<int>visit(n+1,0);
    queue<int>q;
    for(int i=1;i<=n;i++){
        if(visit[i]==0){
            visit[i]=1;
            q.push(i);
            bfs_rec(vec,visit,q);
        }
    }

}


void dfs_rec(vector<int>vec[] ,vector<int>&visited, int &n){
    
    vector<int>a=vec[n];
    cout<<n<<" ";
    for(auto j:a){
        if(visited[j]==0){
            visited[j]=1;
            dfs_rec(vec,visited,j);
        }
    }
    
}

void dfs(vector<int>vec[], int n){

    vector<int>visited(n+1,0);

    for(int i=1;i<=n;i++){
        if(visited[i]==0){
            visited[i]=1;
            dfs_rec(vec,visited,i);
        }
    }

}



// bfs disconnect graph itr 

void bfs_itr_dis(vector<int>vis[] , int s , vector<int>&visited){

        queue<int>q;
        q.push(s);
        visited[s]=1;

        while(!q.empty()){

            int ele = q.front();
            q.pop();
            cout<<ele<<" ";

            vector<int>a=vis[ele];
            for(auto i:a){
                if(visited[i]==0){
                    visited[i]=1;
                    q.push(i);
                }
            }
        }
}

void bfs_dis(vector<int>vis[] , int V){

    vector<int>visited(V+1,0);

    for(int i=1;i<=V;i++){ 
        bfs_itr_dis(vis,1,visited);

}

   
}

int main(){

    int  n  , m;
    cin >> n >> m;
      vector<int>adj[n+1];

    for(int i=0;i<m;i++){
        int u , v ;
        cin >> u >> v ;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
bfs_ite(adj,n);
}