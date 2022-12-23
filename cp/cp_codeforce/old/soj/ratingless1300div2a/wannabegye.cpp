#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    // first appo
    void solve()
    {
        int n;
        cin >> n;
        int p;
        cin >> p;
        unordered_set<int> s;
        for (int i = 0; i < p; i++)
        {
            int x;

            cin >> x;
            s.insert(x);
        }

        int q;
        cin >> q;

        for (int i = 0; i < q; i++)
        {
            int x;

            cin >> x;
            s.insert(x);
        }
        if(s.size()==n){
          cout<<"I become the guy."<<endl;  
        }
        else{
            cout<<"Oh, my keyboard!"<<endl;
        }
    }
};
int main()
{
    solution s;
    s.solve();
}