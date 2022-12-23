#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve()
{
    ll n,len;
    cin>>n>>len;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        v.push_back(str);
    }
    ll min1=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        string str1=v[i];
        for(int j=i+1;j<n;j++)
        {
            string str2=v[j];
            // cout<<x1<<" "<<x2<<"\n";
            ll sum =0;
            for(int k=0;k<len;k++)
            {
                sum+=abs(str1[k]-str2[k]);
            }
            min1=min(min1,sum);
        }
    }
    cout<<min1<<endl;
    
}

int main(){

    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}