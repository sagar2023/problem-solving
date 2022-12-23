// means bit of 1 change to 0
#include <iostream>
using namespace std;
int rightmostbit(int n){
    
    int count=1;
    int m=1;
    while(!(n&m)){
        m=m<<1;
        count++;
    }
    return count;
   

   

}
int main(){
    cout<<rightmostbit(16);
   
} 