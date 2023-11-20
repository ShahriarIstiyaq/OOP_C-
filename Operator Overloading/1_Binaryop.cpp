#include <bits/stdc++.h>
using namespace std;

/*There are multiple ways to overload binary operators.
In this one we used an const class object for operations.
Another way is to use friend function to overload binary operator.

1.Overloading using member function:(syntax)
class MyClass {
public:
    MyClass operator+(const MyClass &obj) const {
        //the perameter inside() will hold the address of 2nd obj.
        //While member function we use only one object perameter.
    }
};

2.Overloading using friend function:(syntax)
class MyClass {
public:
    friend MyClass operator+(const MyClass& obj1, const MyClass& obj2) {
        //While friend function we use both object as perameter.
    }
};
*/

class weight
{
private:
    int kilo;

public:
    weight() // default constructor
    {
        kilo = 0;
    }

    weight(int k)
    {
        kilo = k;
    }

    /*While we use member function to overload a operator we donot need to use "Class_name".
    But in that case we would have to use a return type instade.*/

    int operator+(const weight &obj)
    /*Here we created an object in the argument,
     in order to hold the values for object W2 in the main function.
     Here the 'kilo' variable holds value of 1st object W1 and then obj.kilo holds the value of object W2.*/
    {
        int total = 0;
        total = kilo + obj.kilo;

        return total;
    }

    void display()
    {
        cout << "weight: " << kilo << endl;
    }
};

int main()
{
    weight w1(100), w2(20);
    weight w3;
    w2 = w1 + w2;

    w2.display();

    return 0;
}