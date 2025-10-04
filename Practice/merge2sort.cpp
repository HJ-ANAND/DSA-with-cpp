#include<iostream>
using namespace std;

int main(){
    int a[] = {1,2,3,0,0,0}, m=3 , b[] = {2,5,6}, n=3;
    int idx = m+n-1, i=m-1, j=n-1;

    while(i>=0 && j>=0){
        if(a[i] > b[j]){
            a[idx] = a[i];
            a[idx--]; a[i--];
        } else{
            a[idx] = b[j];
            b[idx--]; b[j--];
        }
        if(i<0){
            while( j >= 0){
                a[idx] = b[j];
                b[idx--], b[j--];
            }
        }
    }

    for(int i=0; i<m+n; i++){
        cout << a[i];
    }

    return 0;
}