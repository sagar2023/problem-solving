#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
int findunique(vector<int>&v){
    int cnt;
    map<int,int>mp;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }
    for(auto i:mp){
        if(i.second==1){
            cnt=i.first;
        }
    }
    return cnt;
}

};
int main(){
    vector<int>v={2,7,4,5,4,2,7};
    solution s;
    cout<<s.findunique(v);

}
