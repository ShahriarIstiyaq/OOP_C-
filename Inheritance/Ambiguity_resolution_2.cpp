#include <iostream>
using namespace std;

class Madara
{
public:
    void say()
    {
        cout << "Weak up to reality!\nNothig ever goes as planned in this world.\nThe longer you live, the more you realize that in this reality only pain, sufferings and futility exists"
             << endl;
    }
};

class X : public Madara
{
    // D's new say() method will override base class's say() method
public:
    void say()
    {
        cout << "\nThe Magic you are looking for is in the work you are avoiding." << endl;
    }
};

int main()
{
    // Ambibuity 2
    Madara b;
    b.say();

    X d;
    d.say();

    return 0;
}
