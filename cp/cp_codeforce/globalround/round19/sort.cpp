#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
void solve(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int aB[n];
    copy(arr,arr+n,aB);
    sort(arr,arr+n);
    
    int i;
    for(i=0;i<n;i++){
        if(arr[i]!=aB[i]){
            cout<<"YES"<<endl;
            return;
            break;
        }
    }
    cout<<"NO"<<endl;
    
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}