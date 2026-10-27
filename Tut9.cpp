// Write a C++ program that illustrates run time polymorphism by using virtual functions
#include <iostream>
using namespace std;

class Shape
{
public:
   virtual double area() const = 0;
   virtual ~Shape() {}
};

class Circle : public Shape
{
   double radius;

public:
   Circle(double r) : radius(r) {}

   double area() const override
   {
      return 3.141592653589793 * radius * radius;
   }
};

class Rectangle : public Shape
{
   double length;
   double breadth;

public:
   Rectangle(double l, double b) : length(l), breadth(b) {}

   double area() const override
   {
      return length * breadth;
   }
};

int main()
{
   Shape *shapePtr;

   Circle c(3.0);
   shapePtr = &c;
   cout << "Area of circle = " << shapePtr->area() << endl;

   Rectangle r(4.0, 5.0);
   shapePtr = &r;
   cout << "Area of rectangle = " << shapePtr->area() << endl;

   return 0;
}

/*
OUTPUT:
Area of circle = 28.2743
Area of rectangle = 20
*/
