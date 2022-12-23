#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
void solve(){
    int n , k;
    cin >>  n >> k;
    string s;
    cin >> s;
    string str1=s;
    reverse(s.begin(),s.end());
    if(k==0){
        cout<<1<<endl;
    }
    else if(k==1){
        if(str1==s){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    else if(k>1){
        if(str1==s){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}