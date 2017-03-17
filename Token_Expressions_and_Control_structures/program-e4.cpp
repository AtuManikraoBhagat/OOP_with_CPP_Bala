/* This programm is written by "Atul M. Bhagat" */

#include <iostream>
#include <iomanip>
#include <cmath>

#define SIZE 10

using namespace std;

int main()
{
  float v, pf;
  int n = SIZE;

  float p[SIZE] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
  float r[SIZE] = {0.11, 0.12, 0.13, 0.14, 0.15, 0.16, 0.17, 0.18, 0.19, 0.20};

  cout << setw(5) << "n = 1";
  for (int i = 2; i <= SIZE; i++)
    {
      cout << setw(9) << "n = " << i;
    }
  cout << endl;

  for (int i = 0; i < SIZE; i++)
    {
      cout << setw(-6) << "p = ";

      for (int j = 0; j < SIZE; j++)
	{
	  if (j == 0)
	    {
	      pf = p[i];
	    }

	  v = pf*(1.0+r[i]);

	  cout.precision(2);
	  cout.setf(ios::fixed, ios::floatfield);
	  cout << v << setw(10);

	  pf = v;
	}

      cout << endl;
    }

  return 0;
}
