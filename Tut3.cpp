//ARRAY SORTING IN CPP
#include <iostream>
using namespace std;
void enterarray(int a[] , int n)
{
   cout << "Enter array :\n";
    for ( int i = 0 ; i < n ; i++)
    {
        cout << "   Element  "<<i+1<<" :" ;
        cin >> a[i];
    }
}
void sort(int a[] , int n)
{
    for(int i=0;i< n-1;i++)
    {
        for ( int j=0;j<n-i-1;j++)
        {
            if ( a[j]>a[j+1])
             swap( a[j] , a[j+1]);
        }
    }
}
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a[100] , n;
    cout << "Enter number of elements (max 100) : ";
    cin >> n;
    enterarray(a , n);
    cout << "The sorted array is : ";
    sort(a , n);
  for ( int i = 0 ; i < n ; i++)
    {
        cout << "\n" << a[i] ;
    } 
      
    return 0;
}
