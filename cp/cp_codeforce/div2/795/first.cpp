#include <bits/stdc++.h>
using namespace std;
void solve(){

    int n ;
     cin >> n ;
     int arr[n];
     for(int i=0;i<n;i++){
         cin >> arr[i];
     }

     int ev=0;
     int odd=0;

     for(int i=0;i<n;i++){
         if(arr[i]&1) odd++;
         else ev++;
     }
     cout<<min(odd,ev)<<endl;
}
int  main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

}