#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){
    int a , b,c,d;
    cin >> a >> b>> c >>d;
   //int a = max(l1,l2);
   //int b = min(r1,r2);
  // cout<<a<<" "<<b<<endl;
    if(a>=c && a<=d){
        cout<<a<<endl;
    }
    else if(c>=a && c<=b){
        cout<<c<<endl;
    }
    else{
        cout<<a+c<<endl;
    }
}


int main(){

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    

}