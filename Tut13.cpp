// Write a C++ program which copies the contents of one file to another
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   string sourceFile, destFile;

   cout << "Enter source file name: ";
   cin >> sourceFile;

   cout << "Enter destination file name: ";
   cin >> destFile;

   ifstream src(sourceFile.c_str(), ios::in);
   if (!src.is_open())
   {
      cout << "Error opening source file." << endl;
      return 1;
   }

   ofstream dest(destFile.c_str(), ios::out);
   if (!dest.is_open())
   {
      cout << "Error opening destination file." << endl;
      src.close();
      return 1;
   }

   dest << src.rdbuf();

   src.close();
   dest.close();

   cout << "File copied successfully." << endl;
   return 0;
}

/*
OUTPUT:
Enter source file name: source.txt
Enter destination file name: copy.txt
File copied successfully.
*/
