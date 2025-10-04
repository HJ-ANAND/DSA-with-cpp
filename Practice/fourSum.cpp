#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int fourSum(vector<int> arr, int n, int tar){
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());

    for(int i=0; i<n; i++){
        if(i>0 && arr[i] == arr[i-1]) continue;

        for(int j=i+1; i<n;){
            int p = j+1, q=n-1;

            while(p<q){
                long long sum = (long long)arr[i] + (long long)arr[j] + (long long)arr[p] + (long long)arr[q];

                if(sum < tar){
                    p++;
                } else if(sum > tar){
                    q--;
                }else{
                    ans.push_back({arr[i], arr[j], arr[p], arr[q]});
                    p++, q--;

                    while(p<q && arr[p] == arr[p-1]) p++;
                }
            }
        }
    }
    return ans;
}

int main(){
    int n, tar;
    cout << "Enter no. of element in Array more than 4. ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout << "\nEnter value for element no. " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "\nEnter Target. ";
    cin >> tar;

    int ans = fourSum(arr, n, tar);
    cout << "Index are: ", ans;

    return 0;
}