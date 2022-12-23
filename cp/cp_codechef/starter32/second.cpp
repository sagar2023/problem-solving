#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
void solve(){
    int n , m;
    cin >> n >> m;

    if(m>n){
        cout<<n<<endl;
    }
    else{
        cout<<2*n-m<<endl;
    }
}
int main(){
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    
}