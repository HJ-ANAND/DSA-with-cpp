#include <iostream>
using namespace std;

/*
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
*/

int main(){
  int n;
  cout << "Enter a Number. ";
  cin >> n;
  int temp = n;
  
  for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
      cout << "*";
    }
    
    for(int j=0; j<2*temp-2; j++){
      cout << " ";
    }
    temp -= 1;
    
    for(int j=0; j<=i; j++){
      cout << "*";
    }
    cout << "\n";
  }
  
  for(int i=0; i<n; i++){
    for(int j=n-i; j>0; j--){
      cout << "*";
    } 
    for(int j=0; j<2*(i+1)-2;j++){
      cout << " ";
    }
    for(int j=n-i; j>0; j--){
      cout << "*";
    } 
    cout << "\n";
  }
  return 0;
}


