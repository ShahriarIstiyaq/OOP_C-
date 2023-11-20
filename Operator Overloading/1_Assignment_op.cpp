#include <iostream>
using namespace std;

class Dis
{
private:
    int feet, inches;

public:
    Dis() // default constructor
    {
        feet = 0, inches = 0;
    }

    Dis(int f, int i) // perameterized constructor
    {
        feet = f, inches = i;
    }

    void display()
    {
        cout << "feet: " << feet << " inches: " << inches << endl;
    }

    // operator overloading of '='.
    void operator=(const Dis &obj2)
    {
        feet = obj2.feet;
        inches = obj2.inches;
    }
};

int main()
{
    Dis d1(11, 10), d2(100, 500);

    cout << "First distance: ";
    d1.display();

    cout << "Second distance: ";
    d2.display();

    // using assignment operator.
    d1 = d2;

    cout << "First distance: ";
    d1.display();

    return 0;
}