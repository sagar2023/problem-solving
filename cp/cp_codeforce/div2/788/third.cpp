#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){

    ll n;
    cin >> n;
    int cntn=0;
    int cntp=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if(is_sorted(arr,arr+n)){
        cout<<"YES"<<endl;
    }
    else{

        int i=0;
        int j=n-1;
        while (i<=j){

            int a = arr[i];
            int b = arr[j];

            if(a<0){
                i++;
            }
            else if(b>0){
                j--;
            }
            else if(a>0 && b<0){
                arr[i]=-arr[i];
                arr[j]=-arr[j];
                i++;
                j--;
            }
            else{
                continue;
            }
        }

        if(is_sorted(arr,arr+n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       
        

      
    }
}
int main(){

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    
}