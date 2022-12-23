#include<bits/stdc++.h>
using namespace std;
int solve(int a , int b){

   

    if (a % 3 == 0 || b % 3 == 0)
    {
        return 0;
    }
    int left=INT_MAX;
    int right=INT_MAX;
   
    if (a >= b)
    {
        left= 1 + solve(a-b, b);
    }

    else{ right =1+solve(a,b-a);}
    return min(left,right);
    
}
int main(){

    int a =2,b=29;
    
    cout<<solve(a,b);
}