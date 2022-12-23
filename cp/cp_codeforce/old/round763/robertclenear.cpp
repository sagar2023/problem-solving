#include <iostream>
using namespace std;
void solve(){
     int n,m,a, b, c , d;
     cin >> n;
     cin >> m;
     cin >> a;
     cin >> b;
     cin >> c;
     cin >> d;
    int dx=1,dy=1;
    int cnt=0;
    while(1){
        if(a==c or b ==d){
            cout<<cnt<<endl;
            break;
        }
        if(a+dx>n or a+dx<1){
            dx=-dx;
        }
        if(b+dy>m or b+dy<1){
            dy=-dy;
        }
        a=a+dx;
        b=b+dy;
        cnt++;
}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    cout<<endl;
   
    
    
}