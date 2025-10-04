#include<iostream>
using namespace std;

void sortArray(int arr[], int n){
    int low=0, mid=0, high=n-1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            mid++, low++;
        } else if (arr[mid] == 1){
            mid++;
        } else {
            swap(arr[high], arr[mid]);
            high--;
        }
    }

    for (int i=0; i<n; i++){
        cout << arr[i];
    }
}

int main(){
    int n;
    cout << "Enter Length Of array. ";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout << "Enter element no. " << i+1 << "only (0,1 &2). ";
        cin >> arr[i];
    }

    sortArray(arr, n); 

    return 0;
}