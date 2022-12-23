#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{

    ll n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bool ans = true;
    for (int i = 2; i < n; i++)
    {
        if (v[i] % 2 != v[i - 2] % 2)
        {
            ans = false;
            break;
        }
    }

    if (ans == false)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}