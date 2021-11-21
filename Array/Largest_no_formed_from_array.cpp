/*
* Given a list of non negative integers, arrange them in such a manner that they form the largest number possible.
* The result is going to be very large, hence return the result in the form of a string.
* https://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array/0
*/
#include<bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
     return (a+b)>(b+a);
}

int main(){
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end(),cmp);
    for(auto x: arr) cout<<x;

}