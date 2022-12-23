#include <bits/stdc++.h>
using namespace std;
int subsetXORSum(vector<int>& nums) 
{
	int result=0,n=nums.size(),d1[32]={0};
	for(int i=0;i<n;i++)
	{
		int d2[32]={0};
		d2[nums[i]]++;
        for(int i=0;i<32;i++){
            cout<<d2[i]<<" ";
        }
        cout<<endl;
		for(int j=0;j<32;j++) d2[nums[i]^j]+=d1[j];

		for(int j=0;j<32;j++) d1[j]+=d2[j];
	}
	for(int i=0;i<32;i++) result+=i*d1[i];
	return result;
}
void secondapp(int arr[],int n){
        int arr1[32]={0};
        for(int i=0;i<n;i++){
            int a = arr[i];
            int k=0;
           while(a>0){
               if(a%2!=0){
               arr1[k]++;
               }
               a=a/2;
               k++;
           }
           for(int j=0;j<32;j++){
               cout<<arr[j]<<" ";
           }
           cout<<endl;

        }
       int max1=*max_element(arr1,arr1+32);
        cout<<max1;

}
int main(){


    vector<int>v={5,1,6};
    cout<<subsetXORSum(v);



}