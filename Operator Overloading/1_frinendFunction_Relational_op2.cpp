/*
1. Create a class Book which contains the following attributes:
● title (string)
● author (string)
● publication_year (int)
Write a C++ program by overloading the == operator to check whether two books have
the same title, author, and publication year. Use a friend function for overloading the ==
 operator.
*/

#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    int publication_year;

public:
    Book(){}; // default constructor.

    // Constructor to initialize the attributes
    Book(string t, string a, int year)
    {
        title = t;
        author = a;
        publication_year = year;
    }

    // For setting data manually
    void setdata()
    {
        cout << "Enter title of the book: ";
        cin >> title;

        cout << "Enter Author of the book: ";
        cin >> author;

        cout << "Enter publication year of the book: ";
        cin >> publication_year;
    }

    // Overloading the equality operator (==) as a friend function
    friend bool operator==(Book B1, Book B2)
    {
        return (B1.title == B2.title && B1.author == B2.author && B1.publication_year == B2.publication_year);
    }
};

int main()
{
    // Create two Book objects
    Book book1("Atomic Habits", "James Clear", 2018);
    Book book2("Keep Going", "Keep Going", 2019);
    // Book book3("Keep Going", "Keep Going", 2019);

    Book book3;
    book3.setdata();

    // Compare the books using the overloaded == operator
    if (book1 == book2)
        cout << "Book 1 and Book 2 are the same." << endl;

    else
        cout << "Book 1 and Book 2 are different." << endl;

    if (book1 == book3)
        cout << "Book 1 and Book 3 are the same." << endl;

    else
        cout << "Book 1 and Book 3 are different." << endl;

    if (book2 == book3)
        cout << "Book 2 and Book 3 are the same." << endl;

    else
        cout << "Book 1 and Book 3 are different." << endl;

    return 0;
}