#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){

    ll n ;
    cin >> n;
   // vector<ll>v;
    ll ans =n;
     map<ll,ll>mp;
    for(int i=0;i<n;i++){

        ll x;
        cin >> x;
       mp[x]++;
       if(mp[x]>2){
           ans--;
       }

    }
    cout<<(ans+1)/2<<endl;

   
    

}
int main(){

    ll t;
    cin >> t;
    while(t--){
        solve();
    }

}