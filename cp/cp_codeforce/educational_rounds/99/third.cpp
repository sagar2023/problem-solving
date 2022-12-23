#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
    void solve(){

        int x , y;
         cin >> x >> y;
         if(x==1 && y==1){
             cout<<0<<" "<<1<<endl;
         }
        //  else if(y==1){
        //      if(x==2){
        //          cout<<1<<" "<<1<<endl;
        //      }
        //      else{

        //      }
        //  }
         else{
             cout<<x-1<<" "<<y<<endl;
         }
    }


};
int main(){

    int t;
    solution s;
    cin >> t;
    while(t--){
        s.solve();
    }

}