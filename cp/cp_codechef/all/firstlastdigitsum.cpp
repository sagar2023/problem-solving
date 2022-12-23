#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r,i=1,sum=0;
    int n1;
     n1=n;
    int cnt=0;
    while(n>0){
        n=n/10;
        cnt++;

    }
    int middle=cnt/2;
    cout<<middle;
   while(n1>0){
        r=n1%10;
        n1=n1/10;
        if(i==1){
            sum=sum+r;
        }
        if(i==cnt-middle){
            sum=sum+r;
        }
        i++;

        
    }
    cout<<sum;
}