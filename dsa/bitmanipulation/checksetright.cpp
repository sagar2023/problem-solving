#include <iostream>
using namespace std;
class solution{
    public:
    void checkbit(int n,int k){
    int checkmass=(n>>k-1);
    int o=(checkmass & 1);
    if(o==1){
        cout<<"it is set bit"<<endl;
    }
    else{
        cout<<"not a set bit"<<endl;
    }


    }

};  
int main(){
    solution s;
    s.checkbit(9,1);

}