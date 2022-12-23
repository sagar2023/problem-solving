#include <bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    int n ;
    cin >> n;

    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n==2){
        cout<<2<<endl;
        return;
    }

    if(n==3){
        cout<<21<<endl;
        return;
    }
    if(n==4){
        cout<<121<<endl;
        return;
    }
    int cnt=0;
    int k=3;
    for(int i=5;i<=1000;i=i+3){
        if(n==i){
            string s="";
            bool flag=true;
            for(int j=0;j<k+cnt*2;j++){
                if(flag){
                    s+='2';
                    flag=false;
                }
                else{
                    s+='1';
                    flag=true;
                }
            }
            cout<<s<<endl;
            return;
        }
        cnt++;
    }
    cnt=0;
    k=4;
     for(int i=6;i<=1000;i=i+3){
        if(n==i){
            string s="";
            bool flag=true;
            for(int j=0;j<k+cnt*2;j++){
                if(flag){
                    s+='2';
                    flag=false;
                }
                else{
                    s+='1';
                    flag=true;
                }
            }
            cout<<s<<endl;
            return;
        }
        cnt++;
    }

     cnt=0;
    k=5;
     for(int i=7;i<=1000;i=i+3){
        if(n==i){
            string s="";
            bool flag=true;
            for(int j=0;j<k+cnt*2;j++){
                if(flag){
                    s+='1';
                    flag=false;
                }
                else{
                    s+='2';
                    flag=true;
                }
            }
            cout<<s<<endl;
            return;
        }
        cnt++;
    }

   

       
    
   

}
int main(){
    
   int t;
   cin >> t;
   while(t--){
       solve();
   }

}