/*Syntax for inheritance:
class Derived_Class : Access_specifier Base_class{
        //statements.
};*/

/*Visibility mode of Base class members:
 ⁕⁕Private data members can never be inherited.

Base class members      Public derivation       Private derivation        Protected derivation
1. Private members:     Not inherited           Not inherited.              Not inherited
2. Public members:      Public                  Private                     Protected
3. Protected members:   Protected               Private                     Protected

⁕⁕Defualt derivation mood is Private.
 */

// Examples of public derivation
#include <iostream>
using namespace std;

class Base
{
    string prv = "private";

protected:
    string prot = "protected";

public:
    string pub = "public";

    // fuction to access private members.
    string getPrv()
    {
        return prv;
    }
};

class Derived : public Base
{
    /*The protected members becomes protected in the public derivation.
    Therefore we cannot access them outside the derive class.*/

    // For access to protected members.
public:
    string getProt()
    {
        return prot;
    }
};

int main()
{
    Derived obj;
    cout << "Member type: " << obj.pub << endl;
    cout << "Member type: " << obj.getPrv() << endl;
    cout << "Member type: " << obj.getProt() << endl;

    return 0;
}