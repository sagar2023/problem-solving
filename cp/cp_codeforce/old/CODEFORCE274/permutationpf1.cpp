#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n ;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    set<int>a;

    for(int i=0;i<n;i++){
        if(arr[i]<=n && a.find(arr[i])== a.end() ){
           
            a.insert(arr[i]);
            // cout<<"0:"<<arr[i]<<" ";
            
        }
        else{
            while(arr[i]>0){
                if(arr[i]<=n && a.find(arr[i])==a.end()){
                    break;
                }
                arr[i]=arr[i]/2;
                //cout<<arr[i]<<" ";
            }
            if(arr[i]!=0){
            
            a.insert(arr[i]);
            //cout<<arr[i]<<" ";
        }
        }
        
    }
    //cout<<endl;

   /* for(auto i : a){
        cout<<i<<" ";
    }
    */
    if(a.size()==n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}