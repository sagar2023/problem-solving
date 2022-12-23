#include <bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<int,int>mp;
    
    int j=1;
    for(int i=1;i<=100;i++){
        mp[j]=i;
        if(i%10==0) j++;
        cout<<i<<endl;
        
    }
    for(auto i:mp){
        cout<<i.first<<i.second<<endl;
    }

}