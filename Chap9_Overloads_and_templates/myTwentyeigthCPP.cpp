// overloaded functions
#include <iostream>
using namespace std;

int sum (int a, int b)
{
  return a+b;
}

double sum (double a, double b)
{
  return a+b;
}

int main ()
{
  cout << sum (10,10) << '\n';
  cout << sum (10.0,10.01) << '\n';
  return 0;
}
