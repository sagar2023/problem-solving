#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int min1 = *min_element(arr,arr+n);
    int max1 = *max_element(arr,arr+n);
    int i;
    for(i = min1 ; i<=max1;i++){
        if(arr[i]+1==arr[i+1]){
            continue;
        }
        else{
            break;
        }
    }
    cout<<i<<endl;
}
int main(){
    solve();
    
}