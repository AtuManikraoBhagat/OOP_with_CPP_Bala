/* This programm is written by "Atul M. Bhagat */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int m;
  int *v;

  cout << "Enter vector size : " << endl;
  cin >> m;

  v = new int [m];

  cout << "To check your performance insert " << m << " integer vlaue" << endl;

  for (int i = 0; i < m; i++)
    {
      cin >> v[i];
    }

  cout << "Given integer value are :" << endl;

  for (int i = 0; i < m; i++)
    {
      if ( i == m-1)
	cout << v[i];
      else
	cout << v[i] << ",";
    }

  cout << endl;

  return 0;
}
