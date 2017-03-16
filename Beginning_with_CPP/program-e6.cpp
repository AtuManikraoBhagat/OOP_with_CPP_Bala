/* This program is written by "Atul M. Bhagat" */

#include <iostream>

using namespace std;

class temp
{
  double f, c;

public:
  void getdata(void);
  void display(void);
};

void temp::getdata(void)
{
  cout << "Enter temperature in Fahrenheit : ";
  cin >> f;
}

void temp::display(void)
{
  cout << "\nTemperature in degree Celcius is '" << (5.0/9.0)*(f-32.0) << "'." << endl;
}


int main()
{
  temp p;
  p.getdata();
  
  p.display();
  return 0;
}
