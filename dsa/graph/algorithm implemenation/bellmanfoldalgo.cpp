#include <bits/stdc++.h>
using namespace std;
struct node{

    int u;
    int v;
    int wt;
    node(int src , int dest , int weight){

        u=src;
        v=dest;
        wt=weight;
    }
};

void bellman(vector<node>edges,vector<int>&dist,int N){

    for(int i=0;i<=N-1;i++){
        for(auto i:edges){
            if(dist[i.u]+i.wt <dist[i.v]){
                dist[i.v]=i.wt+dist[i.u];
            }
        }
    }
    bool flag=true;
    for(auto i:edges){
         if(dist[i.u]+i.wt <dist[i.v]){
                dist[i.v]=i.wt+dist[i.u];
                flag=false;
                break;
            }
    }

    if(flag==false){
        cout<<"negative cycle";
    }
    else{
        int j=0;
        for(auto i:dist){
            cout<<j<<": "<<i<<endl;
            j++;
        }
    }

}

int main(){

    
     int N=5,m=8;
	vector<node> edges; 
	edges.push_back(node(0,1,-1));
	edges.push_back(node(0,2,4));
	edges.push_back(node(1,3,2));
	edges.push_back(node(1,2,3));
//edges.push_back(node(1,3,8));
 edges.push_back(node(1,4,2));
	// edges.push_back(node(2,1,3));
	// edges.push_back(node(2,4,7));
	edges.push_back(node(3,2,5));
	edges.push_back(node(3,1,1));
	// edges.push_back(node(4,1,5));
	edges.push_back(node(4,3,-3));

    int src=0;
    vector<int>dist(N);
    for(int i=0;i<N;i++){
        dist[i]=INT_MAX;

    }
    dist[src]=0;

    bellman(edges,dist,N);






}