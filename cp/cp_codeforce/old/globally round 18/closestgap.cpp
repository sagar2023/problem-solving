#include <iostream>
#define ll long long int 
using namespace std;
void solve(){
    
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int arr[n];
        //cin>>n;
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            //ll x ;
            //cin>>x;
            sum += arr[i];
        }
        if(sum%n==0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    cout<<endl;
}