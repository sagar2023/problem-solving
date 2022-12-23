#include <iostream>
using namespace std;
void solve(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
    
    if(cnt1>cnt2){
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                cout<<i+1<<endl;
                break;
                return;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                cout<<i+1<<endl;
                break;
                return;
            }
        }
        
    }
}
int main(){
    solve();
}