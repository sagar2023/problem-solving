#include <bits/stdc++.h>
using namespace std;
void solve(int caseno){
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    
    int i=0;
    int j=0;
    int cnt=0;
    while(i<s1.length() && j<s2.length()){
        if(s1[i]==s2[j])i++,j++;
        else{
            j++;
            cnt++;
        }
    }
    cout<<i<<endl;
    cout<<j<<endl;
    if(i!=s1.length()){
        cout<<"Case "<<"#"<<caseno<<": "<<"IMPOSSIBLE"<<endl;
    }
    else{
        cout<<"Case "<<"#"<<caseno<<": "<<cnt+(j-i)<<endl;
    }
}
int main(){
    int t;
    cin >> t;
    
    for(int i=1;i<=t;i++){
        solve(i);
    }
}
