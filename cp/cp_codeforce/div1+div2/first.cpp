#include <bits/stdc++.h>
using namespace std;
void solve(int caseno){
   
    int n;
    cin >> n;
    int arr[n];
   for(int i=0;i<n;i++){
       cin >> arr[i];
   }

   sort(arr,arr+n);
   cout<<arr[n-1]+arr[n-2]<<endl;
}
int main(){
    int t;
    cin >> t;
    
    for(int i=1;i<=t;i++){
        solve(i);
    }
}
