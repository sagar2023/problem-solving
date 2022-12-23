#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        //int p = log2(n);
        //int k = pow(2,p);
        int k;
    for(int i=1;i<=n;i=i*2){
         k =i;
    }
        int x = k/2;
        int y = n-k+1;
        if(x>y){
            cout<<x<<endl;
        }
        else{
            cout<<y<<endl;
        }
    }

}
