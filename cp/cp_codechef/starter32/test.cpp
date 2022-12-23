#include <bits/stdc++.h>
using namespace std;
class Solution {   
public:
    void generate(vector<int>& nums,int idx,vector<int>& curr,vector<vector<int>>&ans){
        
		ans.push_back(curr);
		for(int i=idx;i<nums.size();i++){
			curr.push_back(nums[i]);
			generate(nums,i+1,curr,ans);
			curr.pop_back();

		}
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
		vector<vector<int>>ans;
		vector<int>curr;
		generate(nums,0,curr,ans);
		return ans;
    }
};
int main()
{
	vector<int>v={1,2,3};
	Solution s;
	vector<vector<int>>v1=s.subsets(v);

	int n = v1.size();
	int m = v1[0].size();
	cout<<n<<endl;
cout<<"final output"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<v1[i].size();j++){
			cout<<v1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"sagar"<<endl;
	
}
