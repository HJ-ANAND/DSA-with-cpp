#include <iostream>
using namespace std;

int waterContainer(int ht[], int n){
    int lp = 0, rp = n-1, ans = 0;

    while(lp<rp){
        int wid = rp-lp;
        int hig = min(ht[lp], ht[rp]);
        int curWt = wid * hig;
        ans = max(ans, curWt);
        ht[lp]<ht[rp] ? lp++ : rp--;
    }

    return ans;
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

    int ans = waterContainer(arr, n);
    cout << "Maximum Water Would Be. " << ans << endl;

    return 0;
}