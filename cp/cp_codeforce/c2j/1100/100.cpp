#include <bits/stdc++.h>
using namespace std;
void solve(){
    int  n;
    cin >> n;
    
    // unordered_map<int,int>mp1;
    // unordered_map<int,int>mp2;
    int cnte=0;
    int cnto=0;
    int arr1[n];
    int arr2[n];

    for(int i=0;i<n;i++){
        cin >> arr1[i];
        cin >> arr2[i];
    }
    
   int max1=*max_element(arr2,arr2+n);
   int min1=*min_element(arr1,arr1+n);
   //cout<<max1<<endl;
   for(int i=0;i<n;i++){

        if(arr2[i]==max1 && arr1[i]==min1){
            cout<<i+1<<endl;
            return;
        }
   }
   cout<<-1<<endl;

   
   




}
int main(){
    solve();

}