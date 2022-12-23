#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
bool ispalindrome(string &s, int i ,int j){


    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;

    }
    return true;
}
void solve(){
   int n;
   cin >> n;
   ll num;
   cin >> num;
    //cout<<num<<endl;
   string str = to_string(num);

   int len=str.length();

    ll low =1;
    for(int i=0;i<len-1;i++){
        low*=10;
    }
    ll high=1;
    for(int i=0;i<len;i++){
        high*=10;
    }
    high=high-1;
    //cout<<low<<" "<<high<<endl;
    for(ll i=low;i<=high;i++){

        ll num1=num+i;
       // cout<<i<<endl;

    
        if(num1%10==0) continue;
        
        string s=(to_string(num1));
        ll hi=s.size()-1;
        if(ispalindrome(s,0,hi)){
            cout<<i<<endl;
            
        }
        else{
            continue;
        }
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