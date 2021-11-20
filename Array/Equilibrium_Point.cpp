/*
* Equilibrium Point in an array is a position such that the sum of 
* elements before it is equal to the sum of elements after it.
*/

#include<bits/stdc++.h>
using namespace std;

int equilibrium_point(vector<int> &arr){
    if(arr.size() == 0) return -1;
    if(arr.size() == 1) return 0;

    int sum = 0, temp_sum = arr[0];

    sum = accumulate(arr.begin(),arr.end(),sum);

    for(int i=1; i< arr.size(); ++i){
        if(temp_sum == sum-temp_sum-arr[i]) return i;
        temp_sum += arr[i];
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0; i<n; ++i){
        int x; 
        cin>>x;
        arr.push_back(x);
    } 
    int ans = equilibrium_point(arr);
    ans == -1 ? cout<<"No equilibrium_point":cout<<ans;
    return 0;
}