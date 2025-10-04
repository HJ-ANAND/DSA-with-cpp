#include <iostream>
using namespace std;

// Summ and Product Of all numbers in array

int main(){
    int n, sum = 0, pro = 1 ;
    cout << "Enter Size of Array .";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout << "Enter Element number " << i+1 << " . ";
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        sum += arr[i];
        pro *= arr[i];
    }

    cout << "Sum Of element in array is. " << sum << endl;
    cout << "Product Of element in array is. " << pro << endl;
    return 0;
}