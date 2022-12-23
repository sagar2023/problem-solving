#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class A{
   public:
   int a =10;
   int a=11;

};
int main(){

    
   A v1;
   cout<<v1.a<<endl;
    vector<int>v={1,1,2,2,3,4,5};

     unordered_map<int,int>mp;
     for(auto i:v){
        mp[i]++;
     }

     for(auto i:mp){

        
     }
}