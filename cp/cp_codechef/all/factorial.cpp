#include <iostream>
#define int long long int
using namespace std;
    int fact(int n){
        if( n==0){
            return 1;
        }
        else{
            return n*fact(n-1);
        }
    }

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int k=fact(n);
		cout<<k;
	    
	}
	
}