#include <iostream>
#include <algorithm>
using namespace std;

void solve(){


    int n ;
    cin >> n;
    string str;
    cin >> str;

    string s = "Timur";

    sort(s.begin(),s.end());
    sort(str.begin(),str.end());

    if(s==str) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
int main(){
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}