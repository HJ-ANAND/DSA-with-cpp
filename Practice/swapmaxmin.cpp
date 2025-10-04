#include <iostream>
#include <limits.h> 
using namespace std;

// Summ and Product Of all numbers in array

void swapMaxMin(int arr[], int n){
    cout << "Old Array is: ";
    for(int i=0; i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int larg = INT_MIN;
    int smol = INT_MAX;
    int minInd = 0, maxInd = 0;

    for(int i=0; i<n; i++){
        if (arr[i]<smol)
        {
            smol = arr[i];
            minInd = i;
            // cout << i << "\n";
        }
        else if(arr[i]>larg){
            larg = arr[i];
            maxInd = i;
            // cout << i << "\n";
        }
    }
    swap(arr[minInd],arr[maxInd]);
}

int main(){
    int n, sum = 0, pro = 1 ;
    cout << "Enter Size of Array .";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout << "Enter Element number " << i+1 << " . ";
        cin >> arr[i];
    }

    swapMaxMin(arr, n);

    cout << "New Array is: ";
    for(int i=0; i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}