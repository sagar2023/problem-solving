#include <iostream>
using namespace std;
class solution{
    public:
    int countsetbit(int n){
        int cnt=0;
        while(n>0){
            if(n%2 != 0){
                cnt++;
            }
            n=n/2;
        }
        return cnt;

    }

};
int main(){
    solution s;
    int n;
    cin>>n;
    cout<<s.countsetbit( n);

}