#include <iostream>
#define ll long long 
using namespace std;
void solve(){
    ll a; ll s;
    cin>>a;
    cin>>s;
    string b = "";
    string x = to_string(a);
    string y = to_string(s);
    ll pa = x.size();
    ll ps = y.size();
    
    ll i=pa-1;
    ll j=ps-1;
    bool bad=1;
    while(i>=0 && j>=0){
        ll da=x[i]-'0';
        ll ds = y[j]-'0';
        if(ds>=da){
            b=to_string(ds-da)+b;
            i--;
            j--;
        }
        else{
            if(j==0){
                bad=0;
                break;
            }
            ll d = (y[j-1]-'0')*10+y[j]-'0';
            d=d-da;
            if(d>9 || d<0){
                bad=0;
                break;
            }
            b=to_string(d)+b;
            i--;
            j=j-2;
        }
    }
    if(bad==0 || i>=0){
        cout<<-1<<endl;
        return;
    }
    while(j>=0){
        b=y[j]+b;
        j--;
    }
     i=0;
    while(i<b.length()){
        if(b[i]!='0'){
            break;
        }
        i++;
    }
    b=b.substr(i);
    cout<<b<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    cout<<endl;
}