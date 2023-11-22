// First learn about Dimond problem in Hybrid inheritance
#include <iostream>
using namespace std;

class A
{
public:
    void red() { cout << "RED LIGHT!\n"; }
};

class B : virtual public A
{
public:
    void green() { cout << "GREEN LIGHT!\n"; }
};

class C : virtual public A
{
public:
    void go() { cout << "go!\n"; }
};

class D : public C, public B
{ /*If we dont use A as virtual base the red() function will be copied twice in here
Which will result Ambiguity.*/
};

int main()
{
    D obj;
    obj.red();
    obj.green();

    return 0;
}