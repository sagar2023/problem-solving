#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){

    ll n , k;
    cin >> n >> k;
    vector<pair<int,int>>vp(n,{0,0});
    for(int i=0;i<n;i++){
        cin >> vp[i].first;
        vp[i].second=i;
    }
   sort(vp.begin(),vp.end());
    vector<int>rightpos(n);
    int j=0;
    for(auto i:vp){
        rightpos[j]=i.second;
        j++;
    }
    int cnt=1;
    for(int i=1;i<n;i++){
        if(rightpos[i] != rightpos[i-1]+1){
           cnt++; 
        }
    }

    if(cnt<=k){
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
  

}
int main(){

    ll t;
    cin >> t;

    while (t--)
    {
       solve();
    }
    


}