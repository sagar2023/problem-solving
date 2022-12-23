#include <iostream>
#include <map>
#include <vector>
using namespace std;
class solution{
    public:
    vector<int> nonrepeatingnum(int arr[],int n){
        map<int,int>mp;
        vector<int>v;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;

        }
        for(auto i:mp){
            if(i.second==1){
                v.push_back(i.first);
                
            }
        }
        return v;

    }


};
int main(){
    int arr[]={1,2,1,3,2,4,7,4,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    solution s;
    
    vector<int> v;
    v=s.nonrepeatingnum(arr,n);
    int n1=v.size();
    for(int i=0;i<n1;i++){
        cout<<v[i]<<" ";
    }

}

