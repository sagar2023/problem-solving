#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
    void solve(){
        int x;
        cin >> x;
        int curr=0;
        int i=1;
        while(curr<x){
            curr+=i;
            i++;
        }
        if(curr==x+1){
            cout<<i<<endl;
        }
        else{
            cout<<i-1<<endl;
        }
    }

    // another logic behind this 1+2+3+4... === sum(n natural num) == n*(n+1)/2 

    void solve1(){

        int x ;
        cin >> x;
       
        int i=1;
        
        while(i*(i+1)/2<x){
            i++;
        }

        if(i*(i+1)/2==x+1){
            i++;
        }

        cout<<i<<endl;
    }
    
};
int main(){

    solution s;
    int t;
    cin >> t;
    while(t--){
        s.solve1();
    }

}