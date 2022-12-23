#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a , b , x , y;
    cin >> a >> b >> x >> y;

    if(a!=x && a!=y && b!=x && b!=y){
        cout<<2<<endl;
    }

    else if((a==x || a==y) && (b==x || b==y)){
        cout<<0<<endl;
    }
    else {
        cout<<1<<endl;
    }
}

// second apparoch using set 

void solve1(){
    int a , b , x , y;
    cin >> a >> b >> x >> y;
    set<int>s;
    s.insert(a);
    s.insert(b);
    s.insert(x);
    s.insert(y);
    if(s.size()==4){
        cout<<2<<endl;
    }

    else if(s.size()==3){
        cout<<1<<endl;
    }
    else {
        cout<<0<<endl;
    }
}
int main(){


    int t;
    cin >> t;
    while(t--){
        solve1();
    }
}