/*
* Given an array A of N elements. Find the majority element in the array. 
* A majority element in an array A of size N is an element that appears more than N/2 times in the array.
* https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1
*/
#include<bits/stdc++.h>
using namespace std;

int majority_element(vector<int> &arr){

// find best candidate
int major_index = 0, count = 1;
for(int i=0;i<arr.size();i++){
    if(arr[major_index] == arr[i]) ++count;
    else --count;
    if(count == 0) major_index = i, count = 1;
}

// check whether  candidate appear more tha n/2
count = 0;
for(int i=0;i<arr.size();i++){
    if(arr[i] == arr[major_index]) count++;
}
if(count > arr.size()/2) return arr[major_index];
else return -1;

}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int ans = majority_element(arr);
    cout<<ans;
    return 0;
}
