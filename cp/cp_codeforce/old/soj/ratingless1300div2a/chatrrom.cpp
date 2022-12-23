#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
    void chatroom(){
        string s;
        cin>>s;

        string str="hello";
        int ptr=0;
        for(int i=0;i<s.length();i++){
            if(str[ptr]==s[i]){
                ptr++;
            }
        }
         cout<<ptr;
        if(ptr==str.length()){
            cout<<"YES"<<endl;
        }
       
        else{
            cout<<"NO"<<endl;
        }

    }


};
int main(){
    solution s;
    s.chatroom();


}