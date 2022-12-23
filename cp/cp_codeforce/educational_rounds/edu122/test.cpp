#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){
  string s="abcdabceabcd";
  string p="abcd";
   int n = s.length();
   int  k = p.length();
   int l=0;
   vector<int>phash(26,0), shash(26,0);

   while(l<k){
        phash[p[l]-'a']++;
        shash[s[l]-'a']++;
        l++;
   }
  int i=0;
  l--;
  vector<int>v;
   while(l<n){
       if(phash==shash){
         v.push_back(i);  
       }
       l++;
       if(l!=n){
           shash[s[l]-'a']++;
           phash[s[i]-'a']--;
           i++;
       }
   }
    
}
using namespace std;
int main(){
    solve();
}