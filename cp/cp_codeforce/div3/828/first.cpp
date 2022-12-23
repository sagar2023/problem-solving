#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n ;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    string str;
    cin >> str;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                if(str[i]!=str[j]){
                    cout<<"NO"<<endl;
                    return;
                }
                
            }
        }
    }

    cout<<"YES"<<endl;
}
int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

}