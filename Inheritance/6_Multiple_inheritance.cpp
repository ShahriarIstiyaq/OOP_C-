// When a class is derived from more than one base class is called, Multiple inheritance.
#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1;

public:
    void set_data1(int x)
    {
        base1 = x;
    }
};

class Base2
{
protected:
    int base2;

public:
    void ste_data2(int x) { base2 = x; }
};

class Derived : public Base1, public Base2
{
public:
    void showData()
    {
        cout << "The value of Base1 is : " << base1 << endl;
        cout << "The value of Base2 is : " << base2 << endl;
        cout << "The sum of the values is : " << base1 + base2 << endl;
    }
};

/*The derived class will look like this:

Data members:
base1 ---> protected
base2 ---> protected

Member functions:
set_data1() ---> public
set_data2() ---> public
showData() ---> public
 */

int main()
{
    Derived obj;
    obj.set_data1(10);
    obj.ste_data2(40);
    obj.showData();

    return 0;
}