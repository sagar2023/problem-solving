#include <bits/stdc++.h>
#define ll long long 
using namespace std;
template<typename T> void print(vector<T> v) {for (ll i = 0; i < v.size(); i++) {cout << v[i] << " ";}cout<<"\n";}
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>v;
    ll sum=n*m;
    ll count=0;
   for(int i=0;i<n;i++){
       v.push_back(m);
   }
   int x=1;
   for(int i=0;i<n;i=i+2){
       
       if(i==n-1){
           continue;
       }
       else{
           v[i]=m-x;
           v[i+1]=m+x;
       }
    x++;
   }
   print(v);
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}