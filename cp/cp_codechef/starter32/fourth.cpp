#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
void solve(){
int n , x , y;
cin >> n >> x  >> y;
string s;
cin >> s;

int cnt0=0;
int cnt1=0;

for(int i=0;i<n;i++){
    if(s[i]=='1'){
        cnt1++;
    }
    else{

        cnt0++;
    }
}

if(cnt1==n || cnt0==n){
    cout<<0<<endl;
}
else{
    cout<<min(x,y)<<endl;
}



}
int main(){
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    
}