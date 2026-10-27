// Write a program in C++ to implement string class. Write constructors, destructors, Accepts function and Display function
#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
   char *str;

public:
   MyString()
   {
      str = new char[1];
      str[0] = '\0';
   }

   MyString(const char *s)
   {
      if (s)
      {
         str = new char[strlen(s) + 1];
         strcpy(str, s);
      }
      else
      {
         str = new char[1];
         str[0] = '\0';
      }
   }

   MyString(const MyString &other)
   {
      str = new char[strlen(other.str) + 1];
      strcpy(str, other.str);
   }

   ~MyString()
   {
      delete[] str;
   }

   void accept()
   {
      char buffer[256];
      cout << "Enter a string: ";
      cin.getline(buffer, 256);
      delete[] str;
      str = new char[strlen(buffer) + 1];
      strcpy(str, buffer);
   }

   void display() const
   {
      cout << str << endl;
   }
};

int main()
{
   MyString s1;
   s1.accept();

   MyString s2("Object Oriented Programming");
   MyString s3(s2);

   cout << "s1 = ";
   s1.display();

   cout << "s2 = ";
   s2.display();

   cout << "s3 (copy of s2) = ";
   s3.display();

   return 0;
}

/*
OUTPUT:
Enter a string: C++ String Class
s1 = C++ String Class
s2 = Object Oriented Programming
s3 (copy of s2) = Object Oriented Programming
*/
