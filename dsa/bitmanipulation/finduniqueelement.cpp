#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
    void checkunique(vector<int>arr){
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]!=arr[j]){
                    v.push_back(arr[j]);

                }
            }
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }

    }

};
int main(){
    solution s;
    vector<int>v={1,2,3,1,5,6,2,7};
    s.checkunique(v);


}