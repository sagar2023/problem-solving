#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class solution{
    public:
    void solve(){
        string s;
        cin>>s;
        int n = s.length();
        vector<string>v;
        string str="";
        for(int i=0;i<n;i++){
            if(s[i]=='+'){
                v.push_back(str);
                str="";
            }
            else{
                str=str+s[i];
            }
        }
        v.push_back(str);
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(i==v.size()-1){
                cout<<v[i];
            }
            else{
            cout<<v[i]<<"+";
            }
        }

    }


};
int main(){
    solution s;
    s.solve();


}