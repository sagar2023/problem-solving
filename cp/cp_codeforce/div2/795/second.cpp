#include <bits/stdc++.h>
using namespace std;
void solve(){

    int n ;
     cin >> n ;
     int arr[n];
     for(int i=0;i<n;i++){
         cin >> arr[i];
     }

    int first = arr[0];
    int i=0;
    for(i;i<n;i++){
        if(first==arr[i]){
            continue;
        }
        else{
            break;
        }
    }
    //cout<<i<<endl;
    if(i!=n){
        cout<<-1<<endl;
        return;
    }
    else{
        cout<<n<<" ";
        int j=1;
        for(int i=1;i<n;i++){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
    }
}
int  main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

}