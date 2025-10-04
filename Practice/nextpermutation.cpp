#include<iostream>
using namespace std;

void reverseArr(int a[], int n){
    int i = 0, j = n-1;

    while(i<=j){
        swap(a[i], a[j]);
        i++; j--;
    }

    for(int i=0; i<n; i++){
        cout << a[i];
    }
    cout << endl;
}

int main(){
    int a[] = {1,2};
    int n = size(a);
    int piv = -1;
    for(int i = n-2; i>=0; i--){
        if(a[i] < a[i+1]){
            piv = i;
            break;
        }
    }

    if(piv == -1){
        reverseArr(a, n);
    } else{
        for(int i = n-1; i > piv; i--){
            if(a[i] > a[piv]){
                swap(a[i], a[piv]);
                break;
            }
        }
        int i = piv+1, j = n-1;
        while(i<=j){
            swap(a[i], a[j]); 
            i++; j--;
        }

        for(int i=0; i<n; i++){
            cout << a[i];
        }
        cout << endl;
    }


    return 0;
}