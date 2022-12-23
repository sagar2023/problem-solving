#include <iostream> 
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string  n;
        cin>>n;
        int l =n.size();
        if((n[l-1]-'0')%2==0){
            cout<<0<<endl;
        }
        else if((n[0]-'0')%2==0){
            cout<<1<<endl;
        }
        else{
            int ans=-1;
            int j=1;
            for(j;j<l-1;j++){
                if((n[j]-'0')%2==0){
                    ans=2;
                    break;
                }
                
                
            }
            cout<<ans<<endl;
        }
    }
    cout<<endl;
}
