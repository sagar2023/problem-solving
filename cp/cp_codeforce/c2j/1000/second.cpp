#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){
    ll n , a , b;
    cin >> n >> a >> b;
    string str;
    cin >> str;


    long long ans=0;
    ans+=n*a;
    if(b>0){
        ans+=(b*n);
    }
    else{

        int total=0;

        for(int i=1;i<n;i++){
            if(str[i]!=str[i-1]){
                total++;
            }
        }
        total++;

        ans+=((total/2)+1)*b;
    }

    cout<<ans<<endl;
    
}
int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}