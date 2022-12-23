#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;

    if (s.size() < 2)
    {
        cout << "NO" << endl;
    }
    else if (s.size() == 2)
    {
        if (s == "AB")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        bool flag=true;
        int cnta=0;
        int cntb=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A') cnta++;
            else{
                cntb++;
            }
            if(cntb>cnta){
                flag=false;
            }
        }

        if(s[s.size()-1]!='B') flag=false;

        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}