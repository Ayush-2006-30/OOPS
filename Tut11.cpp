// Write a C++ program to implement class and function templates
#include <iostream>
#include <string>
using namespace std;

template <typename T>
T maximumValue(T a, T b)
{
   return (a > b) ? a : b;
}

template <class T>
class Box
{
   T value;

public:
   Box(T val) : value(val) {}

   void display() const
   {
      cout << "Box value = " << value << endl;
   }
};

int main()
{
   cout << "Maximum integer = " << maximumValue(15, 25) << endl;
   cout << "Maximum double = " << maximumValue(5.5, 3.2) << endl;

   Box<int> intBox(100);
   intBox.display();

   Box<string> stringBox("C++ Templates");
   stringBox.display();

   return 0;
}

/*
OUTPUT:
Maximum integer = 25
Maximum double = 5.5
Box value = 100
Box value = C++ Templates
*/
