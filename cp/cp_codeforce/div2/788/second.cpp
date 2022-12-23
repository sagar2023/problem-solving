#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solveIt() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int k;
    cin>>k;
    unordered_set<char> st;
    for(int i=0; i<k; i++){
        char a;
        cin>>a;
        st.insert(a);
    }
    
    int ans=0;
    while(1){
        int i=0;
        int cnt=0;
        string str;
        while(i < s.size()){
            if(st.find(s[i+1]) != st.end()){
                cnt++;
                i++;
                
            }
            else{
                str+=s[i];
                i++;
            }
            
        }
        s=str;
        if(cnt == 0){
            cout<<ans<<'\n';
            return;
        }
        ans++;
    }
    

}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solveIt();
    }  
    return 0;
}