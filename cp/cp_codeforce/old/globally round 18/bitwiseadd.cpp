#include <iostream> 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l;
        int r;
        int cnt=0;
        for(int i=l;i<=r;i++){
            if(i&(i-1)){
                cnt++;
            }
            
        }
        cout<<cnt<<endl;
    }cout<<endl;

}