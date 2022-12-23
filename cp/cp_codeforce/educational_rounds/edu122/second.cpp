#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){
    string s;
    cin>>s;
    int cnt1=0;
    int cnt2=0;
    int a;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            cnt1++;
        }
        else{
            cnt2++;
        }
        a=min(cnt1,cnt2);
    }
    if(cnt1==cnt2){
        cout<<0<<endl;
    }
    else{
        cout<<a<<endl;
    }
    
    
}
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}