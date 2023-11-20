#include <iostream>
using namespace std;

class weight
{
private:
    int kilo;

public:
    weight(int k)
    {
        kilo = k;
    }

    // While overloading relational operators we have to use 'bool' as return type instade of "class_name"
    bool operator<(const weight &obj2)
    {
        if (kilo < obj2.kilo)
            return true;

        else
            return false;
    }

    void display()
    {
        cout << "weight: " << kilo << endl;
    }
};

int main()
{
    weight w1(10), w2(5);

    if (w1 < w2)
        w1.display();

    else
        w2.display();
}