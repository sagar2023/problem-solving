#include <iostream>
using namespace std;
class solution{
    public:
   int hcf(long long m,long long n){
       if(n==0){
            return m;
        }
        
           return  hcf(n,m%n);
    }
    long long sum(long long N, long long M){
        long long  a=hcf(N,M);
        long long d=N/a;
        long long e=M/a;
        return (d+e);
        
        // code here
    }

};
int main(){
    solution s;
   cout<<s.sum(3,3);

}