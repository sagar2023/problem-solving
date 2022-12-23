#include <iostream>
using namespace std;
void array(int arr[],int n){
    int i=0;
    int j=0;
    for(;i<n;i++,j=j+2){
        if(j==n-1){
            cout<<arr[i];
        }

    }

}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    array(arr,n);

}