// Write a C++ program which uses try and catch for exception handling
#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
   double num, den;
   cout << "Enter numerator: ";
   cin >> num;
   cout << "Enter denominator: ";
   cin >> den;

   try
   {
      if (den == 0)
      {
         throw runtime_error("Division by zero is not allowed.");
      }
      double quotient = num / den;
      cout << "Result = " << quotient << endl;
   }
   catch (const exception &e)
   {
      cout << "Exception caught: " << e.what() << endl;
   }

   return 0;
}

/*
OUTPUT:
Enter numerator: 25
Enter denominator: 0
Exception caught: Division by zero is not allowed.
*/
