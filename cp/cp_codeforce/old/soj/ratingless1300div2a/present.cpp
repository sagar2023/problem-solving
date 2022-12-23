#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
   vector<pair<int,int>>vp;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
   // map<int,int>mp;
    for(int i=0;i<n;i++){
        vp.push_back(make_pair(arr[i],i+1));
    }
   sort(vp.begin(),vp.end());
    for(auto i:vp){
        cout<<i.second<<" ";
    }
    
}
int main(){
    solve();
}