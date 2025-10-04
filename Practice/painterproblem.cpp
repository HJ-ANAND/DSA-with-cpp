#include<iostream>
#include <limits.h> 
using namespace std;

bool isValid(int arr[],int n, int m, int minimumTime){
    int painter = 1, time = 0;
        
    for(int i=0; i<n; i++){
        if (time + arr[i] <= minimumTime){
            time += arr[i];
        } else {
            painter++;
            time = arr[i];
        }
    }
        
    return painter <= m; 
}

int minTime(int arr[], int n, int m){
    int sum = 0, min = INT_MIN;

    for (int i=0; i<n; i++){
        sum += arr[i];
        min = max(arr[i], min);
    }

    int st = min, end = sum, ans = -1;
    while(st <= end){
        int mid = st + (end - st)/2;

        if(isValid(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }

    return ans;
}

int main(){
    int n, m;
    cout << "Enter The Number Of Boards. ";
    cin >> n;
    
    int arr[n];
    
    for (int i=0; i<n; i++){
        cout << "Enter Length Of Board. " << i+1 << ". ";
        cin >> arr[i];
    }

    cout << "Enter Number Of Painters. ";
    cin >> m;

    int ans = minTime(arr, n, m);
    cout << "Minimum Time To Paint Boards Would Be. " << ans;
}