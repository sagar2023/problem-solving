#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n ;
    cin>>n;
    int a[n];
    int b[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int max1=*max_element(a,a+n);
    int max2=*max_element(b,b+n);
    if(max1>max2){
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                swap(a[i],b[i]);
            }
            else{
                continue;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                swap(a[i],b[i]);
            }
            else{
                continue;
            }
        }

    }
    max1=*max_element(a,a+n);
    max2=*max_element(b,b+n);
    cout<<max1*max2<<endl;
    
}
int main(){
    int t ;
    cin>>t;
    while(t--){
    solve();
    }
    
}