#include <iostream>
using namespace std;

class Complex
{
int real, img;

public:

void accept(int r, int i)
{

real = r;
img = i;
}

void display()
{
cout << real;

if (img >= 0)
cout << " + i" << img;
else
cout << " - i" << -img;

cout << endl;
}

Complex add(Complex c)
{
Complex result;

result.real = real + c.real;
result.img = img + c.img;

return result;
}

Complex subtract(Complex c)
{
Complex result;

result.real = real - c.real;
result.img = img - c.img;

return result;
}

Complex multiply(Complex c)
{
Complex result;

result.real = (real * c.real) - (img * c.img);
result.img = (real * c.img) + (img * c.real);

return result;
}

Complex divide(Complex c)
{
Complex result;

int denominator = (c.real * c.real) + (c.img * c.img);

result.real = ((real * c.real) + (img * c.img)) / denominator;
result.img = ((img * c.real) - (real * c.img)) / denominator;

return result;
}
};

int main()
{
Complex C1, C2, C3;

C1.accept(3, 5);
C2.accept(7, 5);

cout << "C1 = ";
C1.display();

cout << "C2 = ";
C2.display();

C3 = C1.add(C2);
cout << "Addition = ";
C3.display();

C3 = C1.subtract(C2);
cout << "Subtraction = ";
C3.display();

C3 = C1.multiply(C2);
cout << "Multiplication = ";
C3.display();

C3 = C1.divide(C2);
cout << "Division = ";
C3.display();

return 0;
}
