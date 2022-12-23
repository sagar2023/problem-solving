#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n , x;
    cin >> n >> x;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    if(is_sorted(arr,arr+n)) cout<<0<<endl;
    else{
        int res=0;
        int big=x;
        for(int i=0;i<n;i++){

            if(arr[i]>big){
                int y=arr[i];
                swap(arr[i],big);
                big=y;
                res++;
            }
            if(is_sorted(arr,arr+n)) break;
        }
        if(is_sorted(arr,arr+n)){
            cout<<res<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}
int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

}