#include <iostream>
using namespace std;
void solve(){
    string s;
    cin>>s;
    if(s.length()&1==1){
        cout<<"NO"<<endl;
    }
    else{
        int i;
        for( i=0;i<s.length()/2;i++){
            if(s[i]!=s[i+s.length()/2]){
                cout<<"NO"<<endl;
                break;
            }
            
        }
        if(i==s.length()/2){
        cout<<"YES"<<endl;
        }
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }cout<<endl;
    
}