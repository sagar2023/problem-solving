#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,1,1};
    int arr1[]={10,20,30,40,50};
    map<int,int>mp;
    int n =5;
    for(int i=0;i<n;i++ ){
        mp[arr[i]]=arr1[i];
    }
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }


}