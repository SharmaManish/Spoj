#include <iostream>
using namespace std;

int main () {
  double f = 3.14159;
  cout.unsetf(ios::floatfield);            // floatfield not set
  cout.precision(5);
  cout << f << endl;
  cout.precision(10);
  cout << f << endl;
  cout.setf(ios::fixed,ios::floatfield);   // floatfield set to fixed
  cout << f << endl;
  system ("pause");
  return 0;
}
