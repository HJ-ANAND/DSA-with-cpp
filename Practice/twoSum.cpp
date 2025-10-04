#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

// Question no. 1 on leetCode
// try Q no. 287 by slow fast approch

int twoSum (int arr[], int n, int tar){
    unordered_map<int, int> m;
    vector<int> ans;

    for(int i=0; i<n; i++){
        int first = arr[i];
        int sec = tar - first;

        if(m.find(sec) != m.end()){
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
        m[first] = i;
    }
    return ans;
}

int main(){
    int n, tar;
    cout << "Enter no. of element in Array: ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout << "\nEnter Value for element no. " << i+1 << " : ";
        cin >> arr[i];
    }

    cout << "\nEnter Target. ";
    cin >> tar;

    int ans = twoSum(arr, n, tar);
    cout << "Index are: " << ans;

    return 0;
}