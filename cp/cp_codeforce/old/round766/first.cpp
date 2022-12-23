#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    void solve()
    {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        char arr[n + 1][m + 1];
        bool exit = false;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'B')
                {
                    exit = true;
                }
            }
        }
            if (exit == false)
            {
                cout << "-1" << endl;
            }
            else if (arr[r][c] == 'B')
            {
                cout << "0" << endl;
            }
            else
            {
                exit = false;
                for (int k = 1; k <= n; k++)
                {
                    if (arr[k][c] == 'B')
                    {
                        exit = true;
                    }
                }
                for (int l = 1; l <= m; l++)
                {
                    if (arr[r][l] == 'B')
                    {
                        exit = true;
                    }
                }
                if (exit == true)
                {
                    cout << "1" << endl;
                }
                else
                {
                    cout << "2" << endl;
                }
            }
        }
    
};
int main()
{

    solution s;
    int t;
    cin >> t;
    while (t--)
    {
        s.solve();
    }
}