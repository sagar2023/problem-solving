#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=1;
	while(t--){
	    int a,b;
	   a=0;
       b=1;
	    if(a>0 && b>0){
	        cout<<"Solution"<<endl;
	    }
	    else if(a>0 && b==0){
	        cout<<"Solid"<<endl;
	    }
	    else if (b>0 && a==0){
	        cout<<"Liquid"<<endl;
	    }
	}
	return 0;
}
