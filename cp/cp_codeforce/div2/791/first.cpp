#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){
    ll n;
    cin >> n;


    if(n&1){
        cout<<-1<<endl;
    }
    else if (n<4){
        cout<<-1<<endl;
    }
    else{
         
        ll n4=0,n6=0,cnt4=0,cnt6=0;
        ll n1=n;
        while(n1%6!=0){
            n1=n1-4;
            cnt4+=1;
        }
        n6=n1/6;
         n1=n;
        while(n1%4!=0){
            n1=n1-6;
            cnt6+=1;
        }
        n4=n1/4;
        n4=cnt6+n4;
        n6=n6+cnt4;
        if(n4==0 || n6==0){
            cout<<max(n4,n6)<<" "<<max(n4,n6)<<endl;
        }
        else{
            cout<<n6<<" "<<n4<<endl;
        }

    }
}
int main(){

    ll t;
    cin>> t;
    while(t--){
        solve();
    }


    
}
