// Write a C++ program which demonstrates use of namespace in the program
#include <iostream>
using namespace std;

namespace Arithmetic
{
   void calculate(int a, int b)
   {
      cout << "Arithmetic namespace: " << a << " + " << b << " = " << (a + b) << endl;
   }
}

namespace Geometry
{
   void calculate(int l, int b)
   {
      cout << "Geometry namespace: rectangle area = " << (l * b) << endl;
   }
}

int main()
{
   Arithmetic::calculate(10, 20);
   Geometry::calculate(6, 4);
   return 0;
}

/*
OUTPUT:
Arithmetic namespace: 10 + 20 = 30
Geometry namespace: rectangle area = 24
*/
