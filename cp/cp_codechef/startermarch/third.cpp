#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n ;
    cin >> n;
   string s;
   cin >> s;
   

    //cout<<s<<endl;
    int i=0;
    int j=n-1;
    while(i<j){

       if(s[i]-'a' > s[j]-'a'){
           swap(s[i],s[j]);
       }
        i++;
        j--;
    }
  if(is_sorted(s.begin(),s.end()) )cout<<"YES"<<endl;
  else{
      cout<<"NO"<<endl;
  }
   

}
int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

}