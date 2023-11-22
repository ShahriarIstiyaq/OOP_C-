/*
When a base and a derived class both have constructor and distructor functions,
the order of the constructorare excivuted in order of derivation.
The order of distructor functions are exicuted in reverse order.

Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

⁕⁕ Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};
*/

/*
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

#include <iostream>
using namespace std;

class Base
{
public:
    Base() { cout << "Constructor of Base has been called" << endl; }

    Base(int a) { cout << "Responding from Base , the value is: " << a << endl; }
};

class Derived : public Base
{
public:
    Derived() { cout << "Constructor of Derived has been called" << endl; }
    Derived(int x) : Base(x) {}
};

int main()
{
    Derived obj1, obj2(10);
    return 0;
}