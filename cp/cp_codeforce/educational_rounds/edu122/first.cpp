#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){
    int n;
    cin>>n;
    if(n%7==0){
        cout<<n<<endl;
        return;
    }
    else {
        /*
        n=n/10;
        for(int i=1;i<10;i++){
            n=n*10+i;
            if(n%7==0){
                cout<<n<<endl;
                break;
            }
            n=n/10;
        }
        */
       int curr=n;
       int b =7- curr%7;
      // cout<<b;
       n=n/10;
       cout<<curr+b<<endl;

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