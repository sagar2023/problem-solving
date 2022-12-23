#include <bits/stdc++.h>
using namespace std;
bool bipertilebfs(vector<int>adj[] , vector<int>&color , int src ){

        queue<int>q;
        color[src]=1;
         q.push(src);
        while(!q.empty()){

           int ele = q.front();
            q.pop();

            vector<int>a=adj[ele];
            for(auto i:a){
                if(color[i]==-1){
                    color[i]=1-color[ele];
                    q.push(i);
                }
                else if(color[i]==color[ele]){
                    return false;
                }
            }

        }

        return true;
}

bool isBipertile(vector<int>adj[] , int V){

    vector<int>color(V);
    color.assign(V,-1);
    for(int i=0;i<V;i++){
        if(color[i]==-1){
            if(!bipertilebfs(adj,color,i)) return false;
        }
    }

    return true;
    }
int main(){

}