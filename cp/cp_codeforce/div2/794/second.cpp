#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    if(n==1){
        cout<<0<<endl;
        return;
    }

    
    int cnt=0;
    int ans=0;
    for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1]){
            cnt++;
            i--;
        }
    }
    cout<<cnt<<endl;

}
int main(){

    int t;
    cin >>  t;

    while(t--){
        solve();
    }

}