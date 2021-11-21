/*
* Given an array arr[] of size N and an integer K. 
* Find the maximum for each and every contiguous subarray of size K.
* https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k/0 
*/
#include<bits/stdc++.h>
using namespace std;

void print_max_of_all_subarray_of_size_k(vector<int> &arr,int k){
int n = arr.size();
deque<int> dq(k);

for(int i=0;i<k;i++) {
    while(dq.empty()==false && arr[dq.back()]<arr[i])  dq.pop_back();
    dq.push_back(i);
}

for(int i = k;i<n;i++){
    cout<<arr[dq.front()]<<" ";
    while (dq.empty()==false && dq.front()<i-k+1) dq.pop_front();
    while(dq.empty()==false && arr[dq.back()]<arr[i])  dq.pop_back();
    dq.push_back(i);
}
cout<<arr[dq.front()]<<" ";
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>> arr[i];
    print_max_of_all_subarray_of_size_k(arr,k);
}