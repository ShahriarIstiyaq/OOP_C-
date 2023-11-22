// Example:

#include <iostream>
using namespace std;

class Base
{
protected:
    int data1;

public:
    void setData1()
    {
        cout << "Enter the Value of data1 =";
        cin >> data1;
    }
    void dispData1()
    {
        cout << endl
             << "Value of data1 =" << data1;
    }
};

class Derived : public Base
{
    int data2, product;

public:
    void setData2()
    {
        setData1();
        cout << "Enter the Value of data2 =";
        cin >> data2;
    }

    void dispData2()
    {
        dispData1();
        cout << endl
             << "Value of Data2 =" << data2;
    }

    void cal_product()
    {
        product = data1 * data2;
        cout << endl
             << "Product of " << data1 << " * " << data2 << " = " << product;
    }
};

main()
{

    Derived obj;
    obj.setData2();
    obj.cal_product();
    return 0;
}
