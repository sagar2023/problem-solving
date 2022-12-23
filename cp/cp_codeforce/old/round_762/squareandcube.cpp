#include <iostream>
#include <set>
using namespace std;
void solution(){
    long long n ;
    cin>>n;
    set<int>s;
    for(long long i=1;i*i<=n;i++){
        s.insert(i*i);
        
    }
    for(long long  i=1;i*i*i<=n;i++){
        s.insert(i*i*i);
    }
    int cnt=0;
    for(int i=0;i<s.size();i++){
            cnt++;
    }
    cout<<cnt<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    cout<<endl;
    
}