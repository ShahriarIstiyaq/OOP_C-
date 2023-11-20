// Operator Overloading using friend functions

/*If we try to overload operators using friend fucntions-
1.For unary operator we have to pass One Argument
2.For binary operator we have to pass Tow arguments.*/

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imaginary;

public:
    Complex() // default constructor
    {
        real = 0;
        imaginary = 0;
    }
    Complex(int r, int i)
    {
        real = r, imaginary = i;
    }

    void display()
    {
        cout << "The Complex number is: " << real << " + " << imaginary << "i" << endl;
    }

    // the global operator function is made friend of this class.
    friend Complex operator+(const Complex &obj1, const Complex &obj2);
};

// Global function definition for overloading +
Complex operator+(const Complex &c1, const Complex &c2)
{
    // Create a new Complex object with the sum of individual components
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

int main()
{
    Complex c1(10, 5), c2(2, 4), c3;

    c2 = c1 + c2;
    c2.display();

    return 0;
}