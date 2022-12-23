#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){

//     string s;
//     cin >> s;
//     char ch;
//     cin >> ch;
//     int n = s.size();
//     vector<int>v;
//    for(int i=0;i<n;i++){
//        if(s[i]==ch){
//            v.push_back(i+1);
//        }
//    }
//    for(int i=0;i<v.size();i++){
//        if(v[i]%2){
//            cout<<"YES"<<endl;
//            return;
//        }
//    }
//    cout<<"NO"<<endl;

    string s ;
    cin >> s;
    char ch ;
    cin >> ch;
    int n = s.length();
    for(int i=0;i<n;i++){
        if(s[i]==ch){
            if(i%2==0 && (n-1-i)%2==0){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;


}
int main(){
    ll t;
    cin>>t;
    while(t--){
    solve();
    }

}