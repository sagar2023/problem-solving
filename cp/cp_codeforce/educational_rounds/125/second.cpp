#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
void solve(){
    int n , b, x,y;
    cin >> n >> b >> x >> y;
    vector<ll>v(n+1,0);
    
    for(int i=1;i<n+1;i++){
        if(v[i-1]+x>b){
            v[i]=v[i-1]-y;
        }
        else{
            v[i]=v[i-1]+x;
        }
    }
    ll sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    cout<<sum<<endl;
}
int main(){

    ll t;
    cin >> t;
    while(t--){
        solve();
    }

}