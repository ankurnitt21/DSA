/*
*Given an array A[] of N positive integers. 
*The task is to find the maximum of j - i subjected to the constraint of A[i] < A[j] and i < j.
*https://practice.geeksforgeeks.org/problems/maximum-index-1587115620/1
*/
#include<bits/stdc++.h>
using namespace std;

int maximum_index(vector<int> &arr){

int strt = 0, end = arr.size()-1;
queue<pair<int,int>> q;
q.push({strt,end});

while(!q.empty()){
    pair<int,int> temp = q.front();
    q.pop();
    int x = temp.first;
    int y = temp.second;
    if(x>=arr.size() || y<0) return -1;
    if(arr[x]<=arr[y] && x<=y){
        return y-x;
    }
    q.push({x+1,y});
    q.push({x,y-1});
}
return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;++i) cin>>arr[i];
    int ans = maximum_index(arr);
    cout<<ans;
}