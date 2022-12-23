 #include <bits/stdc++.h>
 #define ll long long 
 using namespace std;
void solve()
{
   ll n,l;cin>>n>>l;
   vector<ll> a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   vector<ll>pos(32,0);
   for(ll x:a){
       for(int j=0;j<l;j++){
           if(x&(1<<j)) pos[j]++;
       }
   }
   for(int i=0;i<32;i++){
       cout<<pos[i]<<" ";
   }
   ll ans=0;
   for(int i=0;i<l;i++){
       ll cnt1=pos[i];
       ll cnt0=n-pos[i];
       if(cnt1>=cnt0) ans+=(1<<i); 
   }
   cout<<ans<<endl;
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  int t=1;cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}