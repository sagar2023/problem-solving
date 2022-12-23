#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    


}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}