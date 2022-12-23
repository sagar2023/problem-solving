#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[]={8, 10, 9, 8, 8, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<max_element(arr, arr + n) - arr<<endl;
}