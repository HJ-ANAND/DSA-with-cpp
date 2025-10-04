#include <iostream>
using namespace std;

int buySell(int price[], int n){
    int maxP = 0, bestBuy = price[0];
    for(int i=1; i<n; i++){
        if(price[i] > bestBuy){
            maxP = max(maxP, price[i]-bestBuy);
        }
        bestBuy = min(bestBuy, price[i]);
    }
    return maxP;
}

int main(){
    int n;
    cout << "Enter The Size Of Array. " ;
    cin >> n;

    int arr[n];

    for (int i=0; i<n ; i++){
        cout << "Enter The Element no. " << i+1 << ". ";
        cin >> arr[i];
    }

    int ans = buySell(arr, n);
    cout << "Maximum Profit Would Be. " << ans << endl;

    return 0;
}