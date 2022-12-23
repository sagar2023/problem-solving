#include<bits/stdc++.h>
 # include <numeric>
#define ll long long int
#define all(x)  x.begin(),x.end()
#define pb push_back
#define hiii {ios_base::sync_with_stdio(0); cin.tie(0);}
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
ll mod=1e9+7;
// inline ll myceil(ll a , ll b){ if(a%b==0) return a/b ; else return a/b + 1 ; }
// bool isPerSquare(long double a) {if(a<0) return false; ll sr = sqrt(a); return (sr*sr == a);}
using namespace std;
 
// ll add(ll a, ll b) {return (a % mod + b % mod + mod) % mod;}
// ll sub(ll a, ll b) {return (a % mod - b % mod + mod) % mod;}
// ll mul(ll a, ll b) {return ((a % mod) * (b % mod) + mod) % mod;}
 
// vector<ll> SieveOfEratosthenes(ll n,ll m) { vector<ll> ans; bool prime[m + 1]; memset(prime, true, m+1); for (ll p = 2ll; p * p <= m; p++) { if (prime[p] == true) { for (ll i = p * p; i <= m; i += p) {prime[i] = false;} } } for (ll p = n; p <= m; p++) { if (prime[p]) { ans.push_back(p); } } return ans; }
// bool dfs(ll n, vector<vector<ll>> &adj,vector<ll> &vis,ll prev) { vis[n] = 1; for(auto i:adj[n]) { if(!vis[i]) { if(dfs(i,adj,vis,n)) return true; } else if(i!=prev) { return true; } } return false; }
// template<typename T> void print(vector<T> v) {for (ll i = 0; i < v.size(); i++) {cout << v[i] << " ";}cout<<"\n";}
// template<typename T> void print(vector<pair<T,T>> v) {for (ll i = 0; i < v.size(); i++) {cout << v[i].first<<" "<<v[i].second<< " ";cout<<"\n";}cout<<"\n";}
// template<typename T> void print(T * arr, ll siz) {for (ll i = 0; i < siz; i++) {cout << arr[i] << " ";}cout<<"\n";}
// template<class T, class U> void print(unordered_map<T, U> mp) {for (auto it : mp) {cout << it.first << " " << it.second << "    ";}}
// template<typename T> void print(set<T> st) {for (auto it : st) {cout << it << "  ";}}
// string DecimaltoBinary(ll n) {string res = ""; while (n) {if (n & 1 == 1) {res = "1" + res;} else {res = "0" + res;} n = n >> 1;} return res;}
// ll fact(ll n) {if (n == 0 || n == 1) {return 1;} return n * fact(n - 1);}
// ll factM(ll n, ll p){if (n >= p)return 0;ll result = 1;for (ll i = 1; i <= n; i++)result = (result * i) % p;return result;}
// ll BinarytoDecimal(string bin) {ll base = 1; ll res = 0; for (ll i = bin.size() - 1; i >= 0; i--) {if (bin[i] == '1') {res += base;} base *= 2;} return res;}
// ll NcR(ll n, ll r) {ll p = 1, k = 1; if (n - r < r)r = n - r; if (r != 0) {while (r) {p *= n; k *= r; ll m = __gcd(p, k); p /= m; k /= m; n--; r--;}} else p = 1; return p;}
// ll complement(ll x,ll n){return ( x ^ ( n - 1 ) );} //N is the (2^x -1)
 
// bool isPalindrome(string S) {  string P = S; reverse(P.begin(), P.end());  if (S == P) {  return true; }  else {  return false; } }
// ll getval(string s){ll val = 0;for(ll i=0;i<32;i++){ll k = pow(2,31-i);val += (s[i]-'0')*k;} return val;}
using namespace std;
 
void solve()
{

    string  s1="Yes";

    string t="";
    for(int i=0;i<18;i++){
        t+=s1;
    }
    string s;
    cin >> s;
    int n = t.size();
    int m=s.size();
    for(int i=0;i<n-m+1;i++){
        if(t.substr(i,m)==s){
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;


   
}

void solve1(){
    string s;
    cin >> s;

    if(s.front()=='e') s="Y"+s;
    else if(s.front()=='s') s="Ye"+s;
    if(s.back()=='e') s+="s";
    else if(s.back()=='Y') s+="es";

    int n = s.size();
    if(n%3){
        cout<<"NO"<<endl;
        return;
    }
    else{

        int cnt=n;
        string t="";
        cnt=cnt/3;
        while(cnt--) t+="Yes";
        if(t==s) yes
        else no

    }
}
int main()
{
    hiii
    long long int t;
    cin >> t;
    int i=1;
    while (i<=t)
    {
      solve();
      i++;
    }
}