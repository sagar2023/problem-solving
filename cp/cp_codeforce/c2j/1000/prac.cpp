#include <bits/stdc++.h>
using namespace std;

void solve(){



    long long int a  , b;

    cin >>  a >> b;

    if(b==1){
        cout<<"NO"<<endl;

    }
    else{

        cout<<"YES"<<endl;
        cout<<(a*b)<<" "<<a<<" "<<(a*b)+a<<endl;



    }
}
int main(){


    int t;
    cin >> t;
    while(t--){
        solve();
    }


}