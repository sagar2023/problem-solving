#include <bits/stdc++.h>
using namespace std;
void solve(){

    string s="soooochoooo";
    int k=4;
    int n =s.size();
    int cnt=1;
    string str="";
    string s1="";

   
    
    for(int i=0;i<n;i++){


        string s1="";
         bool flag=false;
         cnt=1;
        while(s[i]==s[i+1]){
            cnt++;
            s1+=s[i];
            flag=true;
            i++;
        }
        
        if(cnt!=k && flag==true){
            str+=s1;
            str+=s1[0];
        }
        if(flag==false){
            str+=s[i];

        }
        
        

    }

    

    

    cout<<str<<endl;
}
int main(){

    ///cout<<"hhwrj";
    solve();

}