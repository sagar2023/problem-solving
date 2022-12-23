#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int j = 0;
    for (int i = 1; i <= 30001; i++)
    {
        // cout<<arr[i]+1;
        // cout<<j<<" ";
        if (arr[j] == i)
        {

            j++;
            continue;
        }
        else
        {
            cout << i << endl;
            break;
        }
    }
}

void solve1(){
    int n ;
    cin>>n;
    set<int>s;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    int ans=1;
    while(s.count(ans)){
        ans++;
    }
    cout<<ans<<endl;
}
int main()
{
    solve1();
}