#include <iostream>
using namespace std;

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << factorial(n) << endl;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";

        for (int j = 0; j <= i; j++) {
            long long value = factorial(i) / (factorial(j) * factorial(i - j));
            cout << value << " ";
        }

        cout << endl;
    }

    return 0;
}
