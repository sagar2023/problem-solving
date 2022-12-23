#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool ispalindrome(string& s, int i, int j){
    if(i==j){
        return false;
    }
    while(i < j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool isregular(string& s, int i, int j){
    stack<char> st;
    for(int ind = i; ind<=j; ind++){
        if(s[ind] == '('){
            st.push('(');
        }
        else{
            if(st.empty()){
                return false;
            }
            else{
                st.pop();
            }
        }
    }
    if(!st.empty()){
        return false;
    }
    return true;
}

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int last=0;
    int op=0;
    int rem=0;
    for(int i=0; i<s.size(); i++){
        
         if(isregular(s,last, i)){
            last = i+1;
            op++;
        }
        else if(ispalindrome(s,last, i)){
            last = i+1;
            op++;
        }
    }
    rem = n - last;
    cout<<op<<" "<<rem<<'\n';
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}