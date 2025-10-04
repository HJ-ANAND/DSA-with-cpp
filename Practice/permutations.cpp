#include<iostream>
#include<vector>
using namespace std;

// Q no. 46 on leetcode - permutations

void getPerms(vector<int> &arr, int idx, vector<vector<int>> &ans){
    if(idx == arr.size()){
        ans.push_back({arr});
        return;
    }

    for(int i=0; i<arr.size(); i++){
        swap(arr[idx], arr[i]);
        getPerms(arr, idx+1, ans);

        swap(arr[idx], arr[i]);
    }
}

int main(){
    vector<int> arr;
    vector<vector<int>> ans;

    arr = {1,2,3};
    getPerms(arr, 0, ans);
    return ans;

}