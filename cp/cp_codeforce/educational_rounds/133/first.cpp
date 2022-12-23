#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int x;
    cin >> x;

    if (x == 1)
    {
        cout << 2 << endl;
    }
    else if (x == 2)
    {
        cout << 1 << endl;
    }
    else
    {

        // int cnt=0;

        if (x % 3 == 0)
        {
            cout << x / 3 << endl;
        }
        else
        {
            cout << x / 3 + 1 << endl;
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