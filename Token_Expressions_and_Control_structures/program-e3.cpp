/* This programm is written by "Atul M. Bhagat" */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int n;

  cout << "Enter your desired number : " << endl;
  cin >> n;
  cout << endl << endl;

  for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= i; j++)
	{
	  cout << i;
	}
      cout << endl;
    }

  return 0;
}
