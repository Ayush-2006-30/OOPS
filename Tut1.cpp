//Program 1: Pascal Triangle 
//Write a C++ program to print pascal triangles. 


#include <iostream> 
using namespace std; 
int fact(int n); 
int nCr(int n, int r) { 
 return fact(n) / (fact(r) * fact(n - r)); } 
int main() { 
 int rows; 
 cout << "Enter number of rows: "; 
 cin >> rows; 
 for (int i = 0; i < rows; i++) { 
 for (int j = 0; j < rows - i - 1; j++) {  cout << " "; 
 } 
 for (int j = 0; j <= i; j++) { 
 cout << nCr(i, j) << " "; 
 } 
 cout << endl; 
 } 
 return 0; 
} 
int fact(int n) { 
 int fact = 1; 
 for (int i = 1; i <= n; i++) { 
 fact = fact * i; 
 } 
 return fact; 
}
