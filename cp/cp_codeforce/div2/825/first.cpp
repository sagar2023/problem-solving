#include <bits/stdc++.h>
using namespace std;
void solve(){
    int arr[] = {-3,4,3,-2,2,5};
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    if (n < k)
    {
       cout << "Invalid";
       cout<<-1<<endl;
    }
 
    // Compute sum of first window of size k
    int res = 0;
    for (int i=0; i<k; i++)
       res += arr[i];
 
    // Compute sums of remaining windows by
    // removing first element of previous
    // window and adding last element of
    // current window.
    int curr_sum = res;
    for (int i=k; i<n; i++)
    {
       curr_sum += arr[i] - arr[i-k];
       res = max(res, curr_sum);
    }
 
   cout<<res<<endl;
}
int main(){

    int t;
    cin >> t;
    while (t--)
    {
       solve();
    }
    
}
