#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
// void solve(){
//     string s;
//     cin >> s;
//     ll max1=0,max0=0,ans=0;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='0'){
//             max0++;
//             max1=0;
//             ans+=max0;
//         }
//         else if(s[i]=='1'){
//             max1++;
//             max0=0;
//             ans+=max1;
//         }
//         else{
//             max1++;
//             max0++;
//             ans+=max(max0,max1);
//         }
//         swap(max1,max0);
//     }
//     cout<<ans<<endl;
// }


// using dp  when ? then two ways fill 0 and 1 and take max of (0,1)
void solve(){

    string s ;
    cin >> s;
    int n = s.length();
    ll dp[n+1][2];
    // 0 index store 0 position substring 
    dp[0][0]=0;

    // 1 index strore 1 position substring 
    dp[0][1]=0;

    // 
    ll ans=0;
    for(ll i=1;i<=n;i++){
        if(s[i-1]=='?'){
            dp[i][0]=1LL+dp[i-1][1];
            dp[i][1]=1LL+dp[i-1][0];
        }
        else if(s[i-1]=='0'){
            dp[i][1]=0;
            dp[i][0]=1LL+dp[i-1][1];
        }
        else{
            dp[i][0]=0;
            dp[i][1]=1LL+dp[i-1][0];


        }
        ans+=max(dp[i][1],dp[i][0]);
    }
    cout<<ans<<endl;


}
int main(){

    ll t;
    cin >> t;
    while(t--){
        solve();
    }

}