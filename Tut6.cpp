// Write a program in C++ to perform following operations on complex numbers Add, Subtract, Multiply, Divide using operator overloading
#include <iostream>
using namespace std;

class Complex
{
   float real;
   float imag;

public:
   Complex(float r = 0, float i = 0)
   {
      real = r;
      imag = i;
   }

   void accept()
   {
      cout << "Enter real and imaginary parts: ";
      cin >> real >> imag;
   }

   void display() const
   {
      if (imag >= 0)
      {
         cout << real << " + j" << imag << endl;
      }
      else
      {
         cout << real << " - j" << -imag << endl;
      }
   }

   Complex operator+(const Complex &c) const
   {
      return Complex(real + c.real, imag + c.imag);
   }

   Complex operator-(const Complex &c) const
   {
      return Complex(real - c.real, imag - c.imag);
   }

   Complex operator*(const Complex &c) const
   {
      return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
   }

   Complex operator/(const Complex &c) const
   {
      float denom = c.real * c.real + c.imag * c.imag;
      if (denom == 0)
      {
         cout << "Division by zero error" << endl;
         return Complex(0, 0);
      }
      return Complex((real * c.real + imag * c.imag) / denom, (imag * c.real - real * c.imag) / denom);
   }
};

int main()
{
   Complex c1, c2, res;

   c1.accept();
   c2.accept();

   cout << "c1 + c2 = ";
   res = c1 + c2;
   res.display();

   cout << "c1 - c2 = ";
   res = c1 - c2;
   res.display();

   cout << "c1 * c2 = ";
   res = c1 * c2;
   res.display();

   cout << "c1 / c2 = ";
   res = c1 / c2;
   res.display();

   return 0;
}

/*
OUTPUT:
Enter real and imaginary parts: 3 4
Enter real and imaginary parts: 1 2
c1 + c2 = 4 + j6
c1 - c2 = 2 + j2
c1 * c2 = -5 + j10
c1 / c2 = 2.2 - j0.4
*/
