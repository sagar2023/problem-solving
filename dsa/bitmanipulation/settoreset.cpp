// means bit of 1 change to 0
#include <iostream>
using namespace std;
void checksetbit(int n,int k){
    
    int checkmass=~(1 << ( k-1));
    cout<<(n & checkmass)<<endl;
   

   

}
int main(){
    checksetbit(9,4);
   
} 