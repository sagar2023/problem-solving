#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#define ll long long int 
using namespace std;
void solve()
{
   int n ;
   cin >> n;
   vector<int>v(n,0);
   for(int i=0;i<n;i++){
       cin >> v[i];
   }
  
   if(n==1){
       cout<<1<<" "<<1<<endl;
   }
   else{
   int max1= max_element(v.begin(),v.end()) - v.begin();
    int min1= min_element(v.begin(),v.end()) - v.begin();
    cout<<min1+1<<" "<<max1+1<<endl;
   }


   }

int main(){
    int t;
    cin >> t;
    while(t--){
    solve();
    }

}