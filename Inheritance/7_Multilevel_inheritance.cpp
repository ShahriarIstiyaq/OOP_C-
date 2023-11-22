#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void set_roll(int x) { roll = x; }
    void get_roll() { cout << "The roll number is : " << roll << endl; }
};

class Exam : public Student
{
protected:
    double math;
    double cse;

public:
    void setMarks(double m1, double m2)
    {
        math = m1, cse = m2;
    }

    void getMarks()
    {
        cout << "The obtained marks in maths are: " << math << endl;
        cout << "The obtained marks in cse are: " << cse << endl;
    }
};

/*The Exam class will look like this:
 Data members:
    roll ----> protected.
    math ---->protected.
    cse ---->protected.

Member functions:
    set_roll() ---> public
    get_roll() ---> public
    getMarks() ---> public
    setMarks() ---> public
 */

class Result : public Exam
{
    double avg;

public:
    void display_resutl()
    {
        get_roll();
        getMarks();
        cout << "The result is: " << (math + cse) / 2 << endl;
    }
};

/*The Result class will look like this:
Data members:
    roll ----> protected.
    math ----> protected.
    cse ----> protected.
    avg ----> private.

Member functions:
    set_roll() ---> public.
    get_roll() ---> public.
    getMarks() ---> public.
    setMarks() ---> public.
    display_result() ----> public.

⁕⁕The data visility of last class will depend on how privious classes are derived level by level.
*/
int main()
{
    Result obj;
    obj.set_roll(107);
    obj.setMarks(80, 80);
    obj.display_resutl();

    return 0;
}
