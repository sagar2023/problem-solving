#include <bits/stdc++.h>
using namespace  std;
void solve(){
    int a,b,c;
   
    vector<int>v;
    for(int i=0;i<3;i++){
        
       int a;
       cin>>a;
       v.push_back(a);
        
       
    }

    //sort(v.begin(),v.end());
    int largest=v[v.size()-1];
    if(largest==v[0]+v[1]){
        cout<<"YES"<<endl;

    }
    else if(v[0]==v[1] && (v[2]%2==0)){
        cout<<"YES"<<endl;
    }
    else if(v[1]==v[2] && (v[0]%2==0)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
}