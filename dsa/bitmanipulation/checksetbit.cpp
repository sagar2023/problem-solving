#include <iostream>
using namespace std;
void checksetbit(int n,int k){
    
    int checkmass=(1 << ( k-1));
    cout<<(n & checkmass);
if((n & checkmass)!=0){
    cout<<"set";
}
else{
    cout<<"not set";
}
   

}
int main(){
    checksetbit(5,3);
   
} 