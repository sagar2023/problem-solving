#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n , k;
    cin >> n >> k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    
    int i=0;
    //cout<<k<<endl;
    int cnt=0;
    int sum=0;
    int k1=k;
    while(k-arr[i]>0){
        k=k-arr[i];
        sum=sum+arr[i];
        i++;
        cnt++;
    }
    
    if(sum+arr[i]/2<=k1){
        i++;
    }
    cout<<i<<endl;
    
  

}
int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

}