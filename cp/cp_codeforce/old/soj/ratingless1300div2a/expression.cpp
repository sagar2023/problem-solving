#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int max = INT_MIN;
    int d = a * b * c;
    int e = a + b + c;
    int f = a * (b + c);

    int h = c * (a + b);

    if (d > max)
    {
        max = d;
    }

    if (e > max)
    {
        max = e;
    }

    if (f > max)
    {
        max = f;
    }

    if (h > max)
    {
        max = h;
    }

    cout << max << endl;
}
int main()
{
    solve();
}