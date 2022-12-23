#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll a , b , c;
    cin >> a >> b >> c;
    
    
    ll max1=INT_MIN;
    for(ll i=a;i<=b;i++){
        ll div=i/c;
        ll mod =i%c;
        ll sum=mod+div;
        max1=max(max1,sum);
       
    }
    cout<<max1<<endl;
    

    
}
int main(){
    ll t;
    cin>>t;
    while(t--){
    solve();
    }

}