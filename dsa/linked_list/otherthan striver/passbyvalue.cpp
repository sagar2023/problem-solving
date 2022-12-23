#include <iostream>
using namespace std;
int swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
   return a;
}
int main(){
    int a=2;
    int b=3;
    cout<<swap(a,b);
}