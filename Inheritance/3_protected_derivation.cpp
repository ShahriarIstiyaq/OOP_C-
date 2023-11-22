// Examples of protected derivation
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

class Derived : protected Base
{
    /*The public and protected both data memebrs of base class  becomes protected data members of derived class while protected derivation.
    Therefore we have to use special functions to access them in the public section of the derived class.*/

public:
    // For access to protected members of base class.
    string getProt()
    {
        return prot;
    }

    // For access to public members of base class
    string getPublic()
    {
        return pub;
    }
};

int main()
{
    Derived obj;
    cout << "Member type: " << obj.getPublic() << endl;
    cout << "Member type: " << obj.getProt() << endl;
    cout << "Private members cannot be accessed";

    return 0;
}