#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
void solve(){

    int n , k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
   //int max1=*max_element(arr,arr+n);
    if(k>n){
        cout<<arr[n-1]<<endl;
    }
    else{
    cout<<arr[k]<<endl;
    }

}
int main(){
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    
}