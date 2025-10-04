#include<iostream>
#include<vector>
using namespace std;

// Q no. 78 on leetcode

void subsets(vector<int> &arr,vector<int> ans,int i, int n, vector<vector<int>> &allSubsets){
    if(i == n){
        allSubsets.push_back({ans});
        return;
    }

    // include
    ans.push_back(arr[i]);
    subsets(arr, ans, i+1, n, allSubsets);

    ans.pop_back();

    int idx = i+1;
    while(idx < arr.size() && arr[idx] == arr[idx-1]) idx++;

    // exclude
    subsets(arr, ans, i+1, n, allSubsets);
}

int main(){
    vector<int> arr = {1,2,3,4};
    vector<vector<int>> allSubsets;
    vector<int> ans;

    subsets(arr, ans, 0, 4, allSubsets);

    return allSubsets;
}