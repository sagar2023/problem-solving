#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a , b , c ,d;
    cin >> a >> b >> c >> d;
    int e=(a*a)*(d*d*d);
    int f = (b*b)*(c*c*c);
    //cout<<e<<" "<<f<<endl;
    if(e==f){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}