#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a, b , c;
    int max1 = INT_MIN;
    int min1  = INT_MAX;
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    if(arr[0]==arr[1] && arr[1]==arr[2] && arr[0]==arr[2]){
        cout<<arr[0]+1<<" "<<arr[1]+1<<" "<<arr[2]+1<<endl;
    }
    else{
        int max1=INT_MIN;
        for(int i=0;i<3;i++){
            max1=max(max1,arr[i]);
        }
        for(int i=0;i<3;i++){
            arr[i]=max1-arr[i];
            cout<<arr[i]<<" ";
        }
    }
    

}
int main(){
    solve();

}