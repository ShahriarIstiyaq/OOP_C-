#include <bits/stdc++.h>
using namespace std;

/*Syntax:  (This syntax should be defined inside class. Other ways to define definitions outside class)
class_name  operator(keyword) Operator_symbol (arguments)
{
    //Definition.
}*/

/*If we try to overload operators using friend fucntions-
1.For unary operator we have to pass One Argument
2.For binary operator we have to pass Tow arguments.*/
class Dis
{
private:
    int feet;
    int inches;

public:
    Dis() // defult constructor
    {
        feet = 0, inches = 0;
    }

    Dis(int f, int i)
    {
        feet = f, inches = i;
    }

    //- operator overload
    Dis operator-()
    {
        feet = -feet;
        inches = -inches;
    }

    Dis operator++() // pre increment
    {
        ++feet;
        ++inches;
    }

    Dis operator++(int) // post increment
    {
        feet++;
        inches++;
    }

    Dis operator--() // pre decrement
    {
        --feet;
        --inches;
    }

    Dis operator--(int) // post decrement
    {
        feet--;
        inches--;
    }

    // displays.
    void display1()
    {
        cout << "Initial distance-> feet: " << feet << " inches: " << inches << endl;
    }
    void display2()
    {
        cout << "After - is called: \n"
             << " feet: " << feet << " inches: " << inches << endl;
    }

    void display3()
    {
        cout << "After ++ is called: \n"
             << " feet: " << feet << " inches: " << inches << endl;
    }

    void display4()
    {
        cout << "After -- is called: \n"
             << " feet: " << feet << " inches: " << inches << endl;
    }
};

int main()

{
    Dis d1(11, 10), d2(19, 29);

    d1.display1();
    -d1;
    d1.display2();

    // d1(19, 29); // changing the values of object.

    d2.display1();
    d2++;
    d2.display3();

    --d2;
    d2.display4();

    ++d2;
    d2.display3();

    d2--;
    d2.display4();

    return 0;
}