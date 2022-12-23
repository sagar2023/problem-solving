#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
bool ispalindrome(string s){

    int low = 0;
    int high=s.size()-1;
    while(low<=high){
        if(s[low]!=s[high]){
            return false;
        }
        low++;
        high--;
    }
    return true;
}
void solve(){

    int n ;
    cin >> n;
    string s;
    cin >> s;
    int cnt=0;
    int max1=INT_MIN;
    int i;
    unordered_set<char>s1;
    for(auto i:s){
        s1.insert(i);
    }
   
    
        int d = s.size()/2;
        char ch = s[d];
        for(int i=d;i>=0;i--){
            if(s[i]==ch){
                cnt++;
            }
            else{
                break;
            }
        }
        for(int i=d+1;i<n;i++){
            if(s[i]==ch){
                cnt++;
            }
            else{
                break;
            }
        }
        cout<<cnt<<endl;
    
    

}
int main(){
    ll t;
    cin >> t;

    while(t--){
        solve();
    }
}