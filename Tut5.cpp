
// Write a C++ program that illustrates the concept of Function over loading
#include <iostream>
using namespace std;

class Calculator
{
public:
   int add(int a, int b)
   {
      return a + b;
   }

   double add(double a, double b)
   {
      return a + b;
   }

   int add(int a, int b, int c)
   {
      return a + b + c;
   }
};

int main()
{
   Calculator calc;

   cout << "add(10, 20) = " << calc.add(10, 20) << endl;
   cout << "add(2.5, 4.3) = " << calc.add(2.5, 4.3) << endl;
   cout << "add(1, 2, 3) = " << calc.add(1, 2, 3) << endl;

   return 0;
}

/*
OUTPUT:
add(10, 20) = 30
add(2.5, 4.3) = 6.8
add(1, 2, 3) = 6
*/
