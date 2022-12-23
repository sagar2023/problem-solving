#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){

    ll n;
    cin >> n;
    vector<ll>v;
    vector<ll>v1;
    for(int i=0;i<n;i++){
        ll x ;
        cin >> x;
        v.push_back(x);

        if(x!=i){
            v1.push_back(x);
        }
    }

    ll ans = (1<<30)-1;
    for(int i=0;i<v1.size();i++){
        ans=ans&v1[i];
    }
    cout<<ans<<endl;



}
int main(){
    ll t;
    cin >> t;

    while(t--){
        solve();
    }
}