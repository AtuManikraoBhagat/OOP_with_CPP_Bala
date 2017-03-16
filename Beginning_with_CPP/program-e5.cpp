/* This program is written by "Atul M. Bhagat" */

#include <iostream>

using namespace std;

int main()
{
  double f, c;

  cout << "Enter temperature in Fahrenheit : ";
  cin >> f;
  c = (5.0/9.0)*(f-32.0);
  cout << "Temperature in degree Celcius is '" << c << "'." << endl;
  return 0;
}
