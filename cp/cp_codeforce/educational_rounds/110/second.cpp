#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){
    ll n ;
    cin >> n;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end(),[] (int x , int y){
        return x%2 <y%2;
    });
    
    int cnt=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int c = __gcd(v[i],2*v[j]);
            if(c>1){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}
int main(){

    ll t;
    cin >> t;
    while(t--){
        solve();
    }

}