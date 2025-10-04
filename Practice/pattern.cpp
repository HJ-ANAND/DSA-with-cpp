#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter a number. ";
  cin >> n;
  
  /*for (int i=1; i<=n; i++){
    for (int j=1; j<=n; j++){
      cout << j << " ";
    }
    cout << "\n";
  }
  
  int var = 1;
  
  for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
      cout << var << " ";
      var++ ; 
    }
    cout << "\n";
  }
  
  char ch = 'A';
  for (int i=1; i<=n; i++){                                  A
    for(int j=1; j<=i; j++){                                 B B
      cout << ch << " ";                                     C C C  
    }                                                        D D D D
    ch++;
    cout << "\n";
  }
  
  for (int i=0; i<n; i++){
    for (int j=0; j<i; j++){
      cout << " ";
    }
    for (int j=0; j<n-i; j++){
      cout << i+1;
    }
    cout << "\n"; 
  }
  
  for(int i=0; i<n; i++){
    for(int j=0; j<n-i-1; j++){
      cout << " ";
    }
    for(int j=1; j<=i+1; j++){
      cout << j;
    }
    for(int j=i; j>0; j--){
      cout << j;
    }
    cout << "\n";
  }*/
  
  for(int i=0; i<n; i++){
    for(int j=0; j<n-i-1; j++){
      cout << " "; 
    }
    cout << "*";
    if (i!=0){
      for(int j=1; j<=2*i-1; j++){
        cout << " "; 
      }
      cout << "*";
    }
    cout << "\n";
  }
  for(int i=0; i<n-1; i++){
    for(int j=0; j<i+1; j++){
      cout << " ";
    }
    cout << "*";
    
    if(i != n-2){
      for(int j=0; j<2*(n-i)-5; j++){
        cout << " ";
      }
      cout << "*";
    }
    cout << "\n";
  }
  
  return 0; 
}


