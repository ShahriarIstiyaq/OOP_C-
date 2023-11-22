/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }

    // void show()
    // {
    //     cout << "Value of a is " << a << endl;
    //     cout << "Value of b is " << b << endl;
    // }
};

/*Different ways to initialize:
1. Test (int i , int j): a(i), b(j)
2. Test (int i , int j): a(i), b(i + j)
3. Test (int i , int j): a(i), b(2 * j)
4. Test (int i , int j): a(i), b(a + j)
5. Test (int i , int j): b(j), a(i+b) --> This will show garbage value because "a" will be initialized first as "a" was decleared first.

 */
int main()
{
    Test t(4, 6);
    // t.show();

    return 0;
}
