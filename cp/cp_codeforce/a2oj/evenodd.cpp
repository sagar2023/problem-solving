#include <iostream>
#include <vector>
using namespace std;
int main(){
    //long long  n , k ;
    
    //cin >> n >> k;

    // this problem with large no of element so this problem solve by binary serach 

    /*
    vector<long long >ev,od;
    vector<long long >res;
    for(long long i=1;i<=n;i++){
        if(i%2==0){
            ev.push_back(i);
        }
        else{
            od.push_back(i);
        }
    }
    long long  i;
    for( i=0;i<od.size();i++){
        res.push_back(od[i]);
            }
          
    for(long long  i=0;i<ev.size();i++){
        res.push_back(ev[i]);
    }
    cout<<res[k-1]<<endl;
    */


    // mathematics 
    long long  n , k ;
    
    cin >> n >> k;

    long long odd = (n+1)/2;
    long long res;
    if(k<=odd){
        res=2*k-1;
    } 
    else{
        res=2*(k-odd);
    }  
    cout<<res<<endl;
}