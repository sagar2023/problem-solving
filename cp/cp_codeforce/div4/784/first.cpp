#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
void solve(){

    ll div;
    cin >> div;
    if(div<1400){
        cout<<"Division 4"<<endl;
    }
    else if(div>=1400 && div<=1599){
        cout<<"Division 3"<<endl;
    }
    else if(div>=1600 && div<=1899){
        cout<<"Division 2"<<endl;
    }
    else{
        cout<<"Division 1"<<endl;
    }
    

}
int main(){

    ll t;
    cin >> t;
    while(t--){
        solve();
    }

}