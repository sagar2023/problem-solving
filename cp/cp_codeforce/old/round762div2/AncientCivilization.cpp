#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n ,l;
    cin>> n >> l;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    


   int cntf0,cntf1,cntf2,cntf3,cntf4,cntf5=INT_MIN;
  
    int cnt00=0,cnt01=0;
    int cnt10=0,cnt11=0;
    int cnt20=0,cnt21=0;
    int cnt30=0,cnt31=0;
    int cnt40=0,cnt41=0;
    int cnt50=0,cnt51=0;
   bool flag=false;
    for(int i=0;i<n;i++){
        int a = arr[i];
        int j=0;
        
       while(a>0){
           if(a%2==1){
               flag=true;
           }
           else{
               flag=false;
           }

           if(j==0){
              if(flag){
                  cnt01++;
              }
              else{
                  cnt00++;

              }
              


           }
           else if (j==1){
               if(flag){

              }
              else{
                  
              }
           }
           else if(j==2){
               if(flag){
                   
              }
              else{
                  
              }
           }
           else if(j==3){
               if(flag){

              }
              else{
                  
              }
           }
           else if(j==4){
               if(flag){

              }
              else{
                  
              }
           }
           else if(j==5){
               if(flag){

              }
              else{
                  
              }
           }
           else{
               if(flag){

              }
              else{
                  
              }
           }
           a=a/2;
           i++;
       }

    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}