#include <iostream>
#include <math.h>
using namespace std;
void solve(){
    int n , d;
    cin>> n >> d;

    if(n<d){
        cout<<n<<endl;
        return;
    }
    else {
        if(d>=0 && d<=10){
            cout<<int(pow(2,d)+0.5)<<endl;
        }
        else{
            int base = 1024;
            int k = d-10;
            cout<<base*pow(3,k)<<endl;
        }
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){

    
    solve();
    }

}