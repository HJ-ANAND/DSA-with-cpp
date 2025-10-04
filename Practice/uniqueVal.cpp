#include <iostream>
using namespace std;

// Print All Unique Values In An Array

// int findUnq(int arr[], int n){
//     int val[100];
//     for(int i=0; i<n; i++){
//         if
//     }
// }

int main(){
    int n;
    cout << "Enter Size of Array .";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout << "Enter Element number " << i+1 << " . ";
        cin >> arr[i];
    }

    // int ans = findUnq(arr, n);

    // cout << "Unique Value in Array is. " << ans << endl;
    return 0;
}