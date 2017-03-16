/* This program is written by "Atul M. Bhagat" */

#include <iostream>
#include <iomanip>

using namespace std;

void swap_func(int &a, int &b)
{
  cout << "Before swapping :" << endl
       << "a = " << a << endl
       << "b = " << b << endl << endl;

  int temp;
  temp = a;
  a = b;
  b = temp;

  cout << "After swapping :" << endl
       << "a = " << a << endl
       << "b = " << b << endl << endl;
}

int main()
{
  int x, y;

  cout << "Enter two integer value : " << endl;
  cin >> x >> y;

  swap_func(x, y);

  return 0;
}
