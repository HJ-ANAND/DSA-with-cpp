#include<iostream>
using namespace std;

bool isValid(int arr[],int n, int m, int maxAllowedPages){
    int students = 1, pages = 0;
        
    for(int i=0; i<n; i++){
        if(arr[i] > maxAllowedPages){
            return false;
        }
            
        if (pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        } else {
            students++;
            pages = arr[i];
        }
    }
        
    return students > m ? false : true; 
}

int findPages(int arr[], int n, int m){
    int sum = 0; 

    if(m>n){
        return -1;
    }
        
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
        
    int ans = -1;
    int st = 0, end = sum;
        
    while(st <= end) {
        int mid = st + (end-st)/2;
            
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
    cout << "Enter The Number Of Books. ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter Number Of Pages Of Book " << i+1 << ". ";
        cin >> arr[i];
    }

    cout << "Enter Number Of Students. " ;
    cin >> m;

    int ans = findPages(arr, n, m);
    cout << "No. Of Max Pages Are: " << ans;
}