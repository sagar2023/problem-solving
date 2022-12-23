#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    ll n;
    string s, s2;
    cin >> n >> s;
    s += "W";
    s2 = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W')
        {
            if (s2 == "")
                continue;
            if (s2.find('B') != -1 && s2.find('R') != -1)
                ;
            else
            {
                cout << "NO"<<endl;
                return;
            }
            s2 = "";
        }
        else
            s2 += s[i];
    }
    cout << "YES"<<endl;;
}

int main()
{
    
    ll t;
    cin >> t;
    while (t--)
        solve();
}