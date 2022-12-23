#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    for(int i=0;i<5;i++){
        s.insert(i);
    
    }
   set<int>::iterator it;
   for(it=s.begin();it!=s.end();it++){
       cout<<*it<<endl;
   }
}

