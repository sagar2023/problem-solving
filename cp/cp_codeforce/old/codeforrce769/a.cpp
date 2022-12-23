#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s = "";
    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        s = s + a;
    }
    
   if(s.size()==1){
       cout<<"YES"<<endl;
       return;
   }
   if(s.size()==2){
       if (s[0] == '1' && s[1] == '0' || s[0] == '0' && s[1] == '1')
        {
            cout << "YES" << endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
   }
   
   else{
       
       cout<<"NO"<<endl;
   }
}
int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }
}