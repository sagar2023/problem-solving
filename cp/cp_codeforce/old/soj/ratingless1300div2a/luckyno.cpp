#include <bits/stdc++.h>
using namespace std;
void solve(){
    
    int n;
    cin>>n;
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%477==0){
        cout<<"YES"<<endl;
        return;
    }
    string s=to_string(n);
    int k = s.length();
    int i;
    
    for(i=0;i<k;i++){
        if(s[i]=='4' || s[i]=='7'){
            continue;
        }
        else{
            break;
        }
    }
    if(i==k){
        cout<<"YES"<<endl;
        return;
        
    }
    else{
        cout<<"NO"<<endl;
        
    }
    
}
int main(){
    solve();
    
}