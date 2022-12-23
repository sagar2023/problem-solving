#include <iostream>
#include <vector>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    int num1,num2;
    if(n%2!=0){
    num1 = n/2+1;
     num2 =n/2;
    
    }
    else{
        num1=n/2;
        num2=n/2;
        
    }
    vector<int>v;
    int j=1;
    for(int i=1;i<=num1;i++){
        v.push_back(j);
        j=j+2;
    }
    int x=2;
    for(int i=1;i<=num2;i++){
        v.push_back(x);
        x=x+2;
    }
    
    for(int i=0;i<v.size();i++){
        if(i==k-1){
            cout<<v[i]<<endl;
        }
    }
    
}
int main(){
    solve();
}