#include <bits/stdc++.h>
#define ll long long 
using namespace std;
class solution{
    public:
    void solve(){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        
      
        unordered_map<ll,ll>mp;

        for(ll i=0;i<n;i++){
          mp[abs(arr[i])]++;
        }
        ll cnt=0;
        cnt=cnt+mp.size();
        for(auto i:mp){
           if(i.second>1 && i.first!=0) cnt++;
        }
        cout<<cnt<<endl;

    }


};
int main(){
    solution s;
    ll t;
    cin>>t;
    while(t--){
        s.solve();
    }
    cout<<endl;


}