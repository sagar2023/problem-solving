#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a1,a2,b1,b2,c1,c2;
    cin >> a1 >>a2;
    cin>>b1>>b2;
    cin>>c1>>c2;
    int a = a1+a2;
    int b = b1+b2;
    int c = c1+c2;
    int arr[3];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    int max1= *max_element(arr,arr+3);
    cout<<max1<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}