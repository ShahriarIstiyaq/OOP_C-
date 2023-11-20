/*If we try to overload operators using friend fucntions-
1.For unary operator we have to pass One Argument
2.For binary operator we have to pass Tow arguments.*/

#include <bits/stdc++.h>
using namespace std;

class UnaryFriend
{
    int a = 10;
    int
        b = 20;
    int
        c = 30;

public:
    void getvalues()
    {
        cout << "Values of A, B & C \n";
        cout << a << "\n"
             << b << "\n"
             << c << endl;
    }

    void show()
    {
        cout << a << "\n"
             << b << "\n"
             << c << endl;
    }
    void friend operator-(UnaryFriend &x);
};
void operator-(UnaryFriend &x)
{
    x.a = -x.a;
    x.b = -x.b;
    x.c = -x.c;
}

int main()
{
    UnaryFriend x1;
    x1.getvalues();

    cout << "Before Overloading \n";
    x1.show();

    cout << "After Overloading \n";
    -x1; // unary minus operator overloaded
    x1.show();
    return 0;
}
