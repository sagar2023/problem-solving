#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
    // first appo
    void solve(){
        int  s , p;
        cin>> s >> p;
        int arr[p];
        for(int i=0;i<p;i++){
                cin>>arr[i];
        }
        sort(arr,arr+p);
        int fmin=INT_MAX;
        for(int i=0;i<=p-s;i++){
            int min1=INT_MAX;
            int max1=INT_MIN;
            for(int j=i;j<i+s;j++){
                min1=min(min1,arr[j]);
                max1=max(max1,arr[j]);
            }
            fmin=min(fmin,(max1-min1));
        }
        cout<<fmin<<endl;
    }
    // second appoarch  sliding window 

    void solve1(){
        int  s , p;
        cin>> s >> p;
        int arr[p];
        for(int i=0;i<p;i++){
                cin>>arr[i];
        }
        sort(arr,arr+p);
        int finmi=INT_MAX;
        for(int i=0;i<=p-s;i++){
            int min1 = arr[i];
            int max1 = arr[i+s-1];
            finmi=min(finmi,(max1-min1));
        }
        cout<<finmi<<endl;
       
    }

};
int main(){
    solution s;
    s.solve1();
}