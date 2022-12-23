#include <bits/stdc++.h>
using namespace std;
void add_edge(vector<int> adj[], int src, int dest)
{
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}
 
void bfstre(vector<int>adj[], int src , int V , int dest,int pred[]){

    int dist[V];
    //memset(dist,INT_MAX,sizeof(dist));
    for(int i=0;i<V;i++){
        dist[i]=INT_MAX;
        pred[i]=-1;
    }
    cout<<dist[0]<<endl;
    dist[src]=0;
    queue<int>q;
    q.push(src);

    while(!q.empty()){

        int node= q.front();

        q.pop();

        for(auto i  : adj[node]){
            if(dist[node]+1<dist[i]){
                dist[i]=dist[node]+1;
                pred[i]=node;
                q.push(i);
            }
        }
    }

    //cout<<dist[dest];

}

void printpath(vector<int>adj[] , int src , int dest,int V){

    int pred[V];
    bfstre(adj,src,V,dest,pred);
    vector<int> path;
	int crawl = dest;
	path.push_back(crawl);
	while (pred[crawl] != -1) {
		path.push_back(pred[crawl]);
		crawl = pred[crawl];
	}
    cout << "\nPath is::\n";
	for (int i = path.size() - 1; i >= 0; i--)
		cout << path[i] << " ";



}
int main(){

    int v =8;

    vector<int>adj[v];
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 3);
    add_edge(adj, 1, 2);
    add_edge(adj, 3, 4);
    add_edge(adj, 3, 7);
    add_edge(adj, 4, 5);
    add_edge(adj, 4, 6);
    add_edge(adj, 4, 7);
    add_edge(adj, 5, 6);
    add_edge(adj, 6, 7);
    int source = 0, dest = 5;

    //bfstre(adj,source,v,dest);

    printpath(adj,source,dest,v);

}