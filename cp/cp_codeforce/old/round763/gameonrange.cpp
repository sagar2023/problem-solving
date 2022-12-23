#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    ll l[n];
    ll r[n];

   map<pair<ll,ll>,ll>mp;
   for(int i=0;i<n;i++){
       cin >> l[i] >> r[i];
       mp[{l[i],r[i]}]=1;
   }
    for(int i=0;i<n;i++){
        for(int j=l[i];j<=r[i];j++){
            if(l[i]==r[i]){
                cout<<l[i]<<" "<<r[i]<< " "<<j<<endl;
            }
            if(mp[{l[i],j-1}]==1 && mp[{j+1,r[i]}]==1){
                cout<<l[i]<<" "<<r[i]<< " "<<j<<endl;

            }
            if((j==l[i] && mp[{j+1,r[i]}]) || (j==r[i]&&mp[{l[i],j-1}])){
                cout<<l[i]<<" "<<r[i]<< " "<<j<<endl;

            }
            
        }
    }
   
}
void solve1(){
     ll n;
    cin >> n;
    ll l[n],r[n];
    map<pair<ll,ll>,ll> mp;
    for(int i=0;i<n;i++){
        cin >> l[i] >> r[i];
        mp[{l[i],r[i]}]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=l[i];j<=r[i];j++){
                if(l[i]==r[i])
                {
                cout << l[i] << " " << r[i] << " " << j << "\n";
                }
                if(mp[{l[i],j-1}]==1 && mp[{j+1,r[i]}]==1)
                {
                cout << l[i] << " " << r[i] << " " << j << "\n";
                }
                if(j==l[i] && mp[{j+1,r[i]}]==1||j==r[i] && mp[{l[i],j-1}]==1)
                {
                cout << l[i] << " " << r[i] << " " << j << "\n";
                }
        }
        //cout<<endl;
}
cout<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
    //solve();
    solve1();
    }
    cout<<endl;
}