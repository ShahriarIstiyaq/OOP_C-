#include <iostream>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

 Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using? ----->Answer: Multiple inheritance.
    Q2. Which mode of Inheritance are you using? ----->Answer: Public.
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

class simpleCalculator
{
protected:
    int data1, data2, sum;

public:
    void get_data1()
    {
        cout << "Input data for simple calculator: ";
        cin >> data1 >> data2;
        sum = data1 + data2;
    }

    void display_data1() { cout << "The result in simple calculation is : " << sum << endl; }
};

class scientificCalculator
{
protected:
    int data3, data4, product;

public:
    void get_data2()
    {
        cout << "Input data for scientific calculator: ";
        cin >> data3 >> data4;
        product = data3 * data4;
    }

    void display_data2() { cout << "The result of in scientific calculation is : " << product << endl; }
};

class HybridCalculator : public simpleCalculator, public scientificCalculator
{
public:
    void getData()
    {
        get_data1();
        get_data2();
    }

    void showData()
    {
        display_data1();
        display_data2();
    }
};

int main()
{
    HybridCalculator obj;
    obj.getData();
    obj.showData();

    return 0;
}