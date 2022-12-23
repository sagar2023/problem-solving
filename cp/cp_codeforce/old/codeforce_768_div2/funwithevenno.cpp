#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[n];
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    if(s.size()==1){
        cout<<0<<endl;
    }
    else{
         int b =log2(s.size());
        if(s.size()%2==0){
            
            cout<<b<<endl;
        }
        else{
            cout<<b+1<<endl;
            
        }
    }

    
    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();

    }
}