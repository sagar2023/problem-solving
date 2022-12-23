#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
void solve(){
    int n , m;
    cin >> n >> m;
    ll sum=0;
    sum+=(m*(m+1))/2;

    ll d =m;
    
    ll a =m;
    ll res = (n*(2*a+(n-1)*d))/2;
    sum+=res;
    if(n>=1 || m>=1){
        sum-=m;
    }
    cout<<sum<<endl;
}
int main(){

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    

}