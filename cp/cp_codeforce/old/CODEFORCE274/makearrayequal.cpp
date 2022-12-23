#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n ;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    sort(arr,arr+n);
    int minm=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            continue;
        }
        else{
            int a=arr[i+1]-arr[i];
            minm +=a;
        }
    }
    cout<<minm<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}