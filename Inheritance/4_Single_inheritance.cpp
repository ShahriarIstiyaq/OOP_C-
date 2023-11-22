/*The form of inheritance where there is only one Base and Derived class,
 is known as Single inheritance*/
#include <iostream>
using namespace std;

class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;

    // for setting values of the data.
    void setData()
    {
        cout << "Input data: ";
        cin >> data1 >> data2;
    }

    // for accessing the private data.
    int getData1()
    {
        return data1;
    };

    // for accessing the protected data
    int getData2()
    {
        return data2;
    };
};

// Class is being derived publically
class Derived : public Base
{
    int data3;

public:
    void process()
    {
        data3 = data2 * getData1();
    };

    void display()
    {
        cout << "Value of data 1 is " << getData1() << endl;
        cout << "Value of data 2 is " << data2 << endl;
        cout << "Value of data 3 is " << data3 << endl;
    };
};

int main()
{
    Derived der;
    der.setData();
    der.process();
    der.display();

    return 0;
}
