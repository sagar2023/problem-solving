#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    void longand(int n)
    {
        vector<int> v;
       for (int i = 1; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {

                for (int k = i; k <= j; k++)
                    cout << k << " ";

                cout << endl;
            }
        }
    }
};
int main()
{
    solution s;
    s.longand(4);
}