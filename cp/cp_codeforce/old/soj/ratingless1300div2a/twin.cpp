#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    int osum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        osum=osum+arr[i];
    }
    osum=osum/2;
    sort(arr,arr+n,greater<int>());
    int currsum=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        currsum=currsum+arr[i];
        cnt++;
        if(currsum>osum){
            break;
        }
        
    }
    cout<<cnt<<endl;
    
}
int main(){
   

    
    solve();
    
    
}