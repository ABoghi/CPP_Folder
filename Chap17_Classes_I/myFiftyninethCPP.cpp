// classes and uniform initialization
#include <iostream>
using namespace std;

class Circle {
    double radius;
  public:
    Circle(double r) { radius = r; }
    double circum() {return 2*radius*3.14159265;}
};

int main () {
  Circle foo (10.0);   // functional form
  Circle bar = 10.0;   // assignment init.
  Circle baz {10.0};   // uniform init.
  Circle qux = {10.0}; // POD-like

  cout << "foo's circumference: " << qux.circum() << '\n';
  return 0;
}
