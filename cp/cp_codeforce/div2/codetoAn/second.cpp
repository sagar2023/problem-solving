#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#define ll long long int 
using namespace std;
void solve()
{
   ll n,k ;
   cin >> n>>k;
   vector<ll>v(n,0);
   ll sum=0;
ll cnt=0;
   for(int i=0;i<n;i++){
       cin >> v[i];
       sum+=v[i];
   }


    ll min1 = *min_element(v.begin(),v.end());
    ll max1 = *max_element(v.begin(),v.end());
    if(sum-(n*min1)==max1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
    solve();
    }

}