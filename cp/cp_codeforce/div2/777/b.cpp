#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int n , m;
bool isvalid(int i , int j){
    if(i<0 || j<0 || i>=n || j>=m){
        return false;
    }
    return true;
}

void solve(){
 
   cin >> n >> m;
   vector<string>arr(n);

   for(int i=0;i<n;i++){
       string s;
       cin >> s;
       arr[i]=s;
   }
    bool flag=true;
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           if(arr[i][j]=='1'){

               if(isvalid(i,j-1) && arr[i][j-1]=='1' && isvalid(i-1,j) && arr[i-1][j]=='1' &&  arr[i-1][j-1]=='0'){
                   flag=false;
                   break;
               }

                if(isvalid(i,j+1) && arr[i][j+1]=='1' && isvalid(i-1,j) && arr[i-1][j]=='1' && arr[i-1][j+1]=='0'){
                   flag=false;
                   break;
               }

                if(isvalid(i,j+1) && arr[i][j+1]=='1' && isvalid(i+1,j) && arr[i+1][j]=='1' && arr[i+1][j+1]=='0'){
                   flag=false;
                   break;
               }

                if(isvalid(i,j-1) && arr[i][j-1]=='1' && isvalid(i+1,j) && arr[i+1][j]=='1' && arr[i+1][j-1]=='0'){
                   flag=false;
                   break;
               }
           }
       }
       if(flag==false){
           break;
       }
   }

   if(flag){
       cout<<"YES"<<endl;
   }

   else{
       cout<<"NO"<<endl;
   }


   

}
int main(){
    
   int t;
   cin >> t;
   while(t--){
       solve();
   }

}