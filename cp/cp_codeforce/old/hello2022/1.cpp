#include <iostream>
using namespace std;
class solution{
    public:
    void solve(){
        int n;
        int k;
        cin >> n >> k;
        if(k<=(n+1)/2){
            char arr[n][n];
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    arr[i][j]='.';
                }
            }
       
            
            int index=0;
           for(int i=0;i<k;i++){
               arr[index][index]='R';
               index=index+2;
           }
           for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<arr[i][j];
                }
                cout<<endl;
            }
        }
        else{
            cout<<"-1"<<endl;;
        }

    }
};
int main(){
    solution s;
    int t;
    cin>>t;
    while(t--){
        s.solve();
    }
    cout<<endl;

}