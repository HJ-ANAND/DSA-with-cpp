#include<iostream>
#include<vector>
using namespace std;

// Leetcode Question no. 704


int binarySearch(vector<int> &arr, int tar, int st, int end){
    if(st <= end){
        int mid = st+(end-st)/2;

        if(arr[mid] == tar){
            return mid;
        } else if(arr[mid] <= tar){
            return binarySearch(arr, tar, mid+1, end);
        } else{
            return binarySearch(arr, tar, st, mid-1);
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {2,4,8,12,15,25,45};
    int tar = 45;

    int st = 0, end = 7-1;
    binarySearch(arr, tar, st, end);
}