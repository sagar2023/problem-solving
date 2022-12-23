#include <iostream>
#include <vector>
using namespace std;
int main(){
    int l=100000;
    int r=200000;
    int cnt=0;
    vector<int>v;
    if(l<2){
        l=2;
    }
    //cout<<l;
    for(int i=l;i<=r;i++){
            if(i==2){
                continue;
            }
            else{
            if((i&(i-1))==0){
                v.push_back(i);
                
            }
            }
            
            
        }
        /*for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        */
        for(int i=0;i<v.size();i++){
            if(l<=v[i] and v[i]<=r){
                if(v[i] ){
                    cnt++;
                }
                if(v[i]+1){
                    if(r==v[i]){
                        continue;
                    }
                    else{
                    cnt++;
                    }
                }
            }

        }
        cout<<cnt;
}