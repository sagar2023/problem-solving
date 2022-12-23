#include <iostream>
#include <set>
using namespace std;
class solution{
    public:
    void solve(){
       string s;
       getline(cin,s);
       int n  = s.size();
       //cout<<n;
       set<char>st;
       int cnt=0;
       for(int i=0;i<n;i++){
           int a = s[i]-'a';
           
           if(a>=0  && a <26){
               
               st.insert(a);
           }
       }
       cout<<st.size()<<endl;

    }

};
int main(){
    solution s;
    s.solve();
}