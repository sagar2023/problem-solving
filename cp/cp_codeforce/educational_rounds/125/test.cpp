#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#define ll long long int 
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v;
    map<ll,ll>mp;
    for(int i=0;i<n;i++)
    {
        ll ele;
        cin>>ele;
        v.push_back(ele);
    }
    for(int i=0;i<v.size();i++)
    {
        v[i]=log2(v[i]);
        mp[v[i]]++;
    }
	for(auto i:mp){
		cout<<i.first<<" "<<i.second<<endl;
	}
    ll ans=0;
    for(auto i:mp)
    {
        ll n=i.second;

        
        if(n>=2){
			ans+=n*(n-1)/2;
		}
    }
    cout<<ans<<"\n";
}
int main(){

    solve();

}