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

bool cmp(node a , node b){
    return a.wt < b.wt;
}

int findpar(int u , vector<int>&parent){
    if(u==parent[u]){
        return u;
    }

    return parent[u]=findpar(parent[u],parent);
}

void unionf(int u , int v , vector<int>&parent , vector<int>&rank ){

     u = findpar(u,parent);
     v = findpar(v,parent);

    if(rank[u]<rank[v]){
        parent[u]=v;
    }
    else if(rank[v]<rank[u]){
        parent[v]=u;
    }
    else {
        parent[v]=u;
        rank[u]++;
    }
    }

int main(){

    int N=5,m=6;
	vector<node> edges; 
	edges.push_back(node(0,1,2));
	edges.push_back(node(0,3,6));
	edges.push_back(node(1,0,2));
	edges.push_back(node(1,2,3));
	edges.push_back(node(1,3,8));
	edges.push_back(node(1,4,5));
	edges.push_back(node(2,1,3));
	edges.push_back(node(2,4,7));
	edges.push_back(node(3,0,6));
	edges.push_back(node(3,1,8));
	edges.push_back(node(4,1,5));
	edges.push_back(node(4,2,7));

    sort(edges.begin(),edges.end(),cmp);

    vector<int>parent(N);
    vector<int>rank(N);
    for(int i=0;i<N;i++){
        parent[i]=i;
        rank[i]=0;

    }

    vector<pair<int,int>>mst;
    int cost=0;
    for(auto i:edges){
        if(findpar(i.u,parent) != findpar(i.v,parent)){
            cost+=i.wt;
            mst.push_back({i.u,i.v});
            unionf(i.u,i.v,parent,rank);
        }
    }

    cout<<cost<<endl;
    for(auto i:mst){
        cout<<i.first<<"-> "<<i.second<<endl;
    }

}