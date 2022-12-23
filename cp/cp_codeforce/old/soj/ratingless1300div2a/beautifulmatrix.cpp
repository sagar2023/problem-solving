#include <bits/stdc++.h>
using namespace std;
void solve(){
    int arr[5][5];
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>arr[i][j];
        }
    }
    int a;
    int b;
     for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
          if(arr[i][j]==1){
              a=i;
              b=j;
          }
        }
    }
    cout<<abs(a-3)+abs(b-3);
    
}
int main(){
    solve();
    
}