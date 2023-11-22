// C++ program to illustrate the above concept

#include <iostream>
using namespace std;

// Base class
class shape
{
public:
    string name;
    int sides;

    shape(string n, int s) // constructor
    {
        name = n; // this pointer
        sides = s;
    }
};

// Derived class
class triangle : public shape // mode is public
{

private:
    int base;
    int height;

public:
    // shape constructor taking arguments
    // from triangle constructor
    triangle(string name, int sides, int b, int h) : shape(name, sides) // setting values of data members of shape using constructor of that class.
    {
        base = b;
        height = h;
    }

    void area()
    {
        cout << "area of triangle: "
             << (0.5 * base * height) << endl;
    }
    void details()
    {
        cout << "shape is: " << name << endl;
        cout << "no. of sides are: " << sides << endl;
        cout << "base is: " << base << endl;
        cout << "height is: " << height << endl;
        area(); // calling area()
    }
};

// Derived class
class square : public shape
{
private:
    int height;

public:
    // shape constructor taking arguments
    // from square constructor
    square(string name, int sides, int height) : shape(name, sides) // setting values of data members of shape using constructor of that class.
    {
        this->height = height;
    }

    void area()
    {
        cout << "area of square: " << (height * height)
             << endl;
    }

    void details()
    {
        cout << "shape is: " << name << endl;
        cout << "no. of sides are: " << sides << endl;
        cout << "height is: " << height << endl;
        area(); // calling area()
    }
};

int main()
{
    // Creating objects
    triangle t("triangle", 3, 2, 3);
    square s("square", 4, 2);

    t.details();
    cout << endl
         << endl;

    s.details();
    return 0;
}
