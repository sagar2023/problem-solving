#include <iostream>
using namespace std;
void solve(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a = arr[0];
    for(int i=1;i<n;i++){
        a=a|arr[i];
    }
    cout<<a<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}