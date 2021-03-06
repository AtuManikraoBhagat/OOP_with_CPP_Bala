#include <iostream>

using namespace std;

int m = 10;             // Global m

int main()
{
  int m = 20;         // m redeclared, local to main
  
  {
    int k = m;
    int m = 30;     // m declared again local to inner block
    
    cout << "We are in the inner block \n";
    cout << "k = " << k << "\n";
    cout << "m = " << m << "\n";
    cout << "::m = " << ::m << "\n";
  }
  
  cout << "\nNow we are in outer block \n";
  cout << "m = " << m << "\n";
  cout << "::m = " << ::m << "\n";
  
  return 0;
  
}
