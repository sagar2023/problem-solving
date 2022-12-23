#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
void solve(){

   unordered_map<int,int>mp;
   ll n ;
   cin >> n;
   ll arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }

    for(auto i:mp){
        if(i.second>=3){
            cout<<i.first<<endl;
            return;
        }
    }
    cout<<-1<<endl;



}
int main(){

    ll t;
    cin >> t;
    while(t--){
        solve();
    }

}