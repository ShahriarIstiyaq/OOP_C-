/*
•A nested class is a class which is declared in another enclosing class.
•A nested class is a member and as such has the same access rights as any other member.
•The members of an enclosing class have no special access to members of a nested class;
The usual access rules shall be obeyed.
• A nested class is declared within the scope of another class.
*/
#include <iostream>
using namespace std;

class A
{
    int num;

public:
    class B
    {
    private:
        int num;

    public:
        B(int n) : num(n) {}

        void show()
        {
            cout << "The number is : " << num << endl;
        }
    };
};

int main()
{
    A ::B obj(10);
    obj.show();
    return 0;
}