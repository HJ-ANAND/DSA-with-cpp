#include<iostream>
using namespace std;

int peakindex(int A[], int n, int tar){
    int st = 1, end = n-2;

    while(st <= end){
        int mid = st + (end-st)/2;

        if(A[mid] == tar){
            return mid;
        } else if (A[mid-1] < A[mid]){
            st = mid + 1;
        } else {
            end = mid -1;
        }
    }

    return -1;
}

int main(){
    int n;
    cout << "Enter length Of array. ";
    cin >> n;

    int arr[50];

    for(int i=0; i<n; i++){
        cout << "Enter value of element " << i+1 << ". ";
        cin >> arr[i];
    }

    int tar;
    cout << "Enter The Target Value. ";
    cin >> tar;

    int ans = peakindex(arr, n, tar);
    cout << "Peak Index Of Mountain Array is. " << ans;

    return 0;
}