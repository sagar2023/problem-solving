#include <iostream>
using namespace std;
#define ll long long
int main()
{
    ll tc;
    cin >> tc;
    while (tc--)

    {
        ll n;
        cin >> n;
        ll A[n];
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        ll evenn = n / 2;
        ll oddn = n / 2 + n % 2;
        ll evenel = 0;
        ll oddel = 0;
        for (ll i = 0; i < n; i++)
        {
            if (A[i] % 2 == 0)
            {
                evenel++;
            }
            else
            {
                oddel++;
            }
        }
        if ((evenel - oddn) > 0)
        {
            ans = evenel - oddn;
        }
        if (oddel - evenn > 0)
        {
            ans = oddel-evenn;
        }
        cout << n-ans << "\n";
    }
}