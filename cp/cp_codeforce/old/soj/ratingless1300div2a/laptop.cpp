#include <iostream>
using namespace std;
void solve(){
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        int a , b , c , d;
    cin >> a >> b >> c >> d;
    if(a<c && b>d){
        cout<<"Happy Alex"<<endl;
        
    }
    else{
        cout<<"Poor Alex"<<endl;
    }
    }
    
}
int main(){
    solve();
    
}