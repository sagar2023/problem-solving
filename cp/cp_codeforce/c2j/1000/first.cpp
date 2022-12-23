#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
void solve(){
    ll a , b;
    cin >> a >> b;
    if(b==1){
        cout<<"NO"<<endl;
        return;
    }
    else if(b==2){
        cout<<"YES"<<endl;
        cout<<a<<" "<<a*2<<" "<<a*3<<endl;
        return;

    }
    else{
        ll c = a*b;
        cout<<"YES"<<endl;
        cout<<a<<" "<<c-a<<" "<<c<<endl;
        return;
        // vector<ll>v;
        // for(ll i=1;i<=b;i++){
        //     v.push_back(i*a);
        // }

        // for(ll i=0;i<v.size();i++){
        //     ll a = v[i];
        //     for(ll j=i+1;j<v.size();j++){
        //         ll b = v[j];
        //         if(a+b==c){
        //             cout<<"YES"<<endl;
        //             cout<<a<<" "<<b<<" "<<c<<endl;
        //             return;
        //         }
        //     }
        // }
    }

}
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}
