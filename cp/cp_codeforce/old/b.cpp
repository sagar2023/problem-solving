#include <iostream> 
#include <math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
        
        int e = (a)*(int((pow(10,b)+0.5)));
        int f = (c)*(int((pow(10,d)+0.5)));
        //cout<<e<<" "<<f<<endl;
        if(e>f){
            cout<<">"<<endl;
            
        }
        else if(e==f){
            cout<<"="<<endl;
        }
        else{
            cout<<"<"<<endl;
        }
        
        
    }cout<<endl;
}