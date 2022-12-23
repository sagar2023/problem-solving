#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

// using adjecency matrix 
void print(int n , int m  , vector<pair<int,int>>vec[]){
   
     for(int i=1;i<=n;i++){
        cout<<i<<"->";
        
        vector<pair<int,int>>v=vec[i];

        for(int j=0;j<v.size();j++){
            int  a =v[j].first;
            int b = v[j].second;
            cout<<"("<<a<<", "<<b<<")"<<" ";
        }
        cout<<endl;
    }



}
//
void print1(int n , int m , vector<int>vec[]){
     for(int i=1;i<=n;i++){
        cout<<i<<"->";
        
        vector<int>v=vec[i];

        for(int j=0;j<v.size();j++){
            cout<<v[j]<<" ";
        }
        cout<<endl;
    }
}


void print2(int n , vector<vector<int>>v){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){

int n , m;
   cin >> n >> m;
    // vector<pair<int,int>>addj[n+1];
    // for(int i=0;i<m;i++){
    //     int u , v , wt;
    //     cin >> u >> v >>  wt;
    //     addj[u].push_back({v,wt});
    //     addj[v].push_back({u,wt});
    // }
  //print(n , m,addj);

//   vector<int>adj[n+1];

//     for(int i=0;i<m;i++){
//         int u , v ;
//         cin >> u >> v ;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
     //print1(n,m,adj);



     // adjecnecy matrix 

     vector<vector<int>>adj1(n+1,vector<int>(n+1,0));

    for(int i=0;i<m;i++){
        int u , v;
        cin >> u >> v;
        adj1[u][v]=1;
        adj1[v][u]=1;
    }
    
    print2(n,adj1);
     

}
