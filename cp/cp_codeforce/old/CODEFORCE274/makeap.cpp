#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a , b , c;
    cin >> a >> b >> c;
    // 1st condition

    long long m =((2*b-c)/(a));
    //cout<<m<<" ";
    if(m*a==2*b-c && m>0){
        cout<<"YES"<<endl;
     
        return;
    }
    //cout<<a<<" "<<b<<" "<<c<<endl;
    
    m =((a+c)/(2*b));
    //cout<<m<<" ";
    if(2*m*b==(a+c) && m>0){
        cout<<"YES"<<endl;
        return;
    }

    m = (2*b-a)/c;
    if(m*c==(2*b-a) && m>0){
        cout<<"YES"<<endl;
        return;
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