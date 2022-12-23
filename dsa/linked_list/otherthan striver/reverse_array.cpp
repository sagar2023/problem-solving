#include <iostream>
using namespace std;
void revese(int arr[],int n){
    int temp;
    int j=n-1;
    for(int i=0;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

    }


}
void dispaly(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    dispaly(arr,n);
    revese(arr,n);
    dispaly(arr,n);


}