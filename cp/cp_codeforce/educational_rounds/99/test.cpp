#include <bits/stdc++.h>
using namespace std;
void solve(int arr[], int n, int target)
{

    vector<vector<int>> res;

    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            int sum = 0;
            vector<int> v;
            bool flag = true;
            for (int k = i; k <= j; k++)
            {
                // cout<<arr[k]<<" ";
                sum += arr[k];
                v.push_back(arr[k]);
                // cout<<arr[k]<<" ";
                if (sum > target)
                {

                    res.push_back(v);
                    flag = false;
                    break;
                }
            }
            // cout<<endl;
            if (flag == false)
            {
                break;
            }
        }
    }

    int min1 = INT_MAX;
    int a;
    for (int i = 0; i < res.size(); i++)
    {
        int col = res[i].size();

        if (min1 > col)
        {
            min1 = col;
            a = i;
        }
    }
    if(min1==INT_MAX){
        cout<<0<<endl;
        return;
    }
    cout << min1 << endl;

    // for(int j=0;j<res[a].size();j++){
    //     cout<<res[a][j]<<" ";
    // }
}

void solve1(int arr[], int n, int target)
{

    int currsum = 0;
    int min1 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        currsum = 0;
        for (int j = i; j < n; j++)
        {
            currsum += arr[j];
            if (currsum > target)
            {
                min1 = min(min1, j - i + 1);
            }
        }
    }

    if(min1==INT_MAX){
        cout<<0<<endl;
    }

    cout<<min1<<endl;
}

void solve2(int arr[] , int n , int target){

    int start=0;
    int end=0;
    int min1=INT_MAX;
    int currsum=0;

    while(start<=end && end<n){
        while(currsum<=target && end<n){
         
            currsum+=arr[end];
            end++;
        }

        while(currsum>target && start<n){
               min1=min(min1,end-start);
            currsum-=arr[start];
            start++;
        }
    }

    if(min1==INT_MAX){
        cout<<0<<endl;
        return;
    }

    cout<<min1<<endl;
    

}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int target;
        cin >> target;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve2(arr, n, target);
    }
}