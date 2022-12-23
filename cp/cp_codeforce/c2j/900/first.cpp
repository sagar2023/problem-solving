#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int gcd(int a , int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a==b){
        return a;
    }

    if(a>b){
        return gcd(a-b,b);

    }

    return gcd(a,b-a);
}
void solve(){

    ll n;
    cin >> n;
    vector<ll>v;
    unordered_map<int,int>mp;
    for(ll i =0;i<n;i++){
        ll x ;
        cin >> x;
        v.push_back(x);
    }
    vector<ll>res;
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            res.push_back(v[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]%2!=0){
            res.push_back(v[i]);
        }
    }
    int cnt=0;
    for(auto i:res){
        mp[i]=1;
    }
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         int c = gcd(res[i],2*res[j]);
    //         if(c>1){
    //             cnt++;
    //         }
    //     }
    // }
    for(auto i:mp){
        
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