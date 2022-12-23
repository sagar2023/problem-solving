#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define ld long double
void solve(){

    int n ;
    cin >> n;

    vector<int>v;
    unordered_set<int>s;
     ll sum=0;
    for(int i=0;i<n;i++){
        int x ;
        cin >> x;
        v.push_back(x);
        s.insert(x);
        sum+=x;
    }
    ll same=sum/n;
    bool flag1=true;
    for(int i=0;i<n;i++){
        if(same!=v[i]){
            flag1=false;
            break;
        }
    }

    if(flag1==true){
        cout<<"YES"<<endl;
        return;
    }
   // cout<<flag1<<endl;
    for(int i=0;i<n;i++){
        ll diff=sum-v[i];
      // cout<<diff/(n-1)<<endl;
      ll a = (diff/(n-1));
       //cout<<a<<endl;
        if(a==v[i]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;

   


}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

}
