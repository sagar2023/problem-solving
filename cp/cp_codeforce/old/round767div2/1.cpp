#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    map<int,int>mp;
   

    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    for(auto i:mp){
       if(i.first<=k){
           k=k+i.second;
       }
       else{
           break;
       }
        
    }
    cout<<k<<endl;

    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
}