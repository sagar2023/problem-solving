#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
bool isInteger(double N)
{
 
   
    int X = N;
 
    double temp2 = N - X;
 
    if (temp2 > 0) {
        return false;
    }
    return true;
}
void solve(){

    ll x , y;
    cin >> x >> y;

    if(x==0 && y==0){
        cout<<0<<endl;
    }
    else{
        x=x*x;
        y=y*y;
        float res=sqrt(x+y);
        if(isInteger(res)) cout<<1<<endl;
        else{
            cout<<2<<endl;
        }


    }

}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    

}