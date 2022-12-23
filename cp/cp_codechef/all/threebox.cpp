#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        int r = a + b + c;
        if (r == d)
        {
            cout << 1 << endl;
        }

        int cnt = 1;
        if (r > d)
        {
            int k = r / d;
            cnt = cnt + k;
            if (a == d && b == d && c == d)
            {
                cnt = cnt - 1;
                cout << cnt << endl;
            }
            else
            {
                cout << cnt << endl;
            }
        }
    }
    return 0;
}
