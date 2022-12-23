#include <bits/stdc++.h>
using namespace std;
void solve(int caseno){
   
   string s;
   cin >> s;
   int n = s.length();
   int j;
   unordered_map<char,int>mp;
   for(auto i:s){
       mp[i]++;
   }

    for(int i=0;i<n;i++){
       if(mp[s[i]]==1){
           j=i;
           break;
       }
       mp[s[i]]--;
    }
    cout<<s.substr(j,n)<<endl;

}
int main(){
    int t;
    cin >> t;
    
    for(int i=1;i<=t;i++){
        solve(i);
    }
}
