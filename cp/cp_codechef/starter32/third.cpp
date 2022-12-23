#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
void solve(){

    int n ;
     cin >> n ;
     string s;
     cin >> s;
     //int cnt=0;
    vector<pair<int,int>>vp;
    string s1=s;
    reverse(s1.begin(),s1.end());
    if(is_sorted(s.begin(),s.end())){
        cout<<0<<endl;
    }
    else if(is_sorted(s1.begin(),s1.end())){
        cout<<1<<endl;
    }
     else{
         
         for(int i=n-1;i>=0;i--){

             if(s[i]=='0'){

                 for(int j=0;j<=i;j++){
                     if(s[j]=='0') s[j]='1';
                     else{
                         s[j]='0';
                     }
                 }
                 vp.push_back({i,i+1});
             }
             
         }
         cout<<vp.size()<<endl;
         for(auto i:vp){
             cout<<i.first<<" "<<i.second<<endl;
         }
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