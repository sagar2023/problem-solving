#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{

    int n;
    cin >> n;
    int arr[n];
    priority_queue<int> q;
    if(q.size()==1 && q.top()==1){
        cout<<"maomao90"<<endl;
    }
    else{
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    bool flag = true;
    int cnt = 0;
    while (flag)
    {
        
        int x = q.top();
        if(x==1){
            break;
        }
        q.pop();
        if (x % 2 == 0)
        {
            int a = x / 2;
            int b = x / 2;
            q.push(a);
            q.push(b);
        }
        else
        {
            int a = x / 2;
            int b = x / 2 + 1;
            q.push(a);
            q.push(b);
        }
        cnt++;

        
    }


    if(cnt&1){
        cout<<"errorgorn"<<endl;
    }
    else{
        cout<<"maomao90"<<endl;
    }
    }
}
// because at the end we stop priority queue at 1 1 1 1 size of 4
// so below logic is based on this 
// sum=sum-n 
void solve1(){
    int n ;
    cin >> n;
    ll sum=0;
    for(int i=0;i<n;i++){
        ll x;
        cin >> x;
        sum+=x;
    }

    sum-=n;
    if(sum&1){
        cout<<"errorgorn"<<endl;
    }
    else{
        cout<<"maomao90"<<endl;
    }
}

void solve3(){
    int n;
    cin >> n;

    multiset<int>s;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    int cnt=0;
    while (!s.empty())
  
    {

        int a = *s.begin();
        if(a==1){
            s.erase(s.begin());
        }
        else{

            int x = *s.begin();
             s.erase(s.begin());
            s.insert(x/2);
            s.insert(x/2+x%2);
           
            cnt++;
        }
    }
    if(cnt&1){
         cout<<"errorgorn"<<endl;
    }
    else{
        cout<<"maomao90"<<endl;
    }

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve3();
    }
}
