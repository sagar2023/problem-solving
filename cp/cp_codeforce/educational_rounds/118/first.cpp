#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
void solve(){

    ll x1 , p1, x2 , p2;
    cin >> x1 >> p1;

    cin >> x2 >> p2;


    while(true){
        if(p1==0){
            break;
        }
        x1=x1*10;
        p1=p1-1;
        
       
    }
    while(true){
        if(p2==0){
            break;
        }
        x2=x2*10;
        p2=p2-1;
        
       
    }

    
    if(x1>x2){
        cout<<">"<<endl;
    }
    else if(x1==x2) {
        cout<<"="<<endl;
    }
    else{
        cout<<"<"<<endl;
    }
    

}
int main(){

    ll t;
    cin >>t;
    while (t--)
    {
        solve();
    }
    

}