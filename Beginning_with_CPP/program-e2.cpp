/* This programm is written by "Atul M. Bhagat" */

#include <iostream>

using namespace std;

int main()
{
  float number1, number2, result;

  cout << "Enter Two numbers :";
  cin >> number1 >> number2;

  if (number1 > number2)
    {
      result = number1;
    }
  else
    {
      result = number2;
    }

  cout << "\n" << "The larger number is : " << result;

  return 0;
}
