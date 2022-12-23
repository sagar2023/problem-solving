#include <bits/stdc++.h>
#define rep(i, s, e) for(int i = s; i < e; i ++)
using namespace std;
class solution{
    public:
    void solve(){
    string s; cin >> s;
    string ans ;
    bool fl = 0;
    rep(i,0,s.size())
    {
	  if(i+3 <= s.size() && s.substr(i,3) == "WUB") { fl = 1; i += 2; continue; }
	  if(fl && ans.size()) ans += ' ';
	  fl = 0;
	  ans += s[i];
    }
 
    cout << ans << endl;
    }


};
int main(){
    solution s;
    s.solve();

}
