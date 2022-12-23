#include <iostream>
using namespace std;
void solve(){

    int n =12;
    int n1 =n- n/2-1;
    cout<<n1<<endl;

    for(int i=0;i<12;i++){
        for(int j=0;j<3;j++){

            if(i>n1){
                cout<<i<<endl;
                if(j==1){
            cout<<"*"<<" ";
                }
                else{
                    continue;
                }

            }
            else{
                
                cout<<"*"<<" "<<endl;
            }
        }
        cout<<endl;

    }
}
int main(){
    solve();
}