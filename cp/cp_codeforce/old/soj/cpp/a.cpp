#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    //p=number of characters in pattern, q=number of characters in s 
    //Space Complexity O(p+q)
    //Time Complexity O(p+q)
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        stringstream st(s);
        string temp="";
        while(st>>temp){
            v.push_back(temp);
        }
        int n=pattern.size(),m=v.size();
        if(n!=m) return 0;
        unordered_map<char,string>mp;
        set<string>s1;
        for(int i=0;i<n;i++){
            if(mp.find(pattern[i]) !=mp.end()){
                if(mp[pattern[i]]!=v[i]){
                    return false;
                }
            }
            else{
                if(s1.count(v[i])>0){
                    return false;
                }
                mp[pattern[i]]=v[i];
                s1.insert(v[i]);
            }
        }
        return 1;
    }
};
int main(){

    Solution s1;
    string pattern = "abba", s = "dog dog cat dog";
    cout<<s1.wordPattern(pattern,s);

}