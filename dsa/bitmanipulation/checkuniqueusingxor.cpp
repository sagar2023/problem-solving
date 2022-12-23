#include <iostream>
#include <vector>
using namespace std;
class solution{
    public:
    int uniqueelement(vector<int>v){
        int unique=0; // 0 first taken ,Xor o with any number gives same number when 
        // are your opreration xor 
        for(int i=0;i<v.size();i++){
            unique=unique^v[i];       // at the all dublicate cancel because of
            // xoring and 0 and unique element left so we can take xor with 0 and 
            // number become a that numbewr
        }
        return unique;

    }
};
int main(){
    vector<int>v={1,2,3,2,3,1,7,5,4,5,4};
    solution s;
    cout<<s.uniqueelement(v);

}