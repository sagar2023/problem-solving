#include <bits/stdc++.h>
using namespace std;
void solve(){

   int k , n , m;
   		cin >> k >>  n >> m;
   		vector<int> a(n) , b(m);
   		for(auto &it : a)
   		    cin >> it;
   		for(auto &it : b){
   		    cin >> it;
   		}
   		bool flag = true;
   		vector<int> ans;
   		int i , j ;
   		i = j = 0;
   		
   		while(i < n and j < m){
   		    if(a[i] == 0){
   		        ans.push_back(a[i]);
   		        i++;
   		        k++;
   		        continue;
   		    }
   		    if(b[j] == 0){
   		        ans.push_back(b[j]);
   		        j++;
   		        k++;
   		        continue;
   		    }
   		    if(a[i] < b[j] and a[i] <= k){
   		        ans.push_back(a[i]);
   		        i++;
   		        continue;
   		    }
   		    if(b[j] <= k){
   		        ans.push_back(b[j]);
   		        j++;
   		        continue;
   		    }
   		    flag = false;
   		    break;
   		}
   		while(i < n){
   		    if(a[i] == 0){
   		        ans.push_back(a[i]);
   		        i++;
   		        k++;
   		        continue;
   		    }
   		    else if(a[i] <= k){
   		        ans.push_back(a[i]);
   		        i++;
   		        continue;
   		    }
   		    else{
   		        flag = false;
   		        break;
   		    }
   		}
   		
   		while(j < m){
   		    if(b[j] == 0){
   		        ans.push_back(b[j]);
   		        j++;
   		        k++;
   		        continue;
   		    }
   		    else if(b[j] <= k){
   		        ans.push_back(b[j]);
   		        j++;
   		        continue;
   		    }
   		    else{
   		        flag = false;
   		        break;
   		    }
   		}
   		if(flag){
   		    for(auto it : ans){
   		        cout << it << " ";
   		    }
   		}
   		else{
   		    cout << -1 ;
   		}
        cout<<endl;

}
int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

}