#include <iostream>
using namespace std;

class Book
{
    string title;
    int price;

public:
    // Constructor
    Book(string t, int p)
    {
        title = t;
        price = p;
    }

    void display()
    {
        cout << "Book Title: " << title << endl;
        cout << "Book Price: " << price << endl;
    }
};

int main()
{
    Book b("C++ Programming", 500);

    b.display();

    return 0;
}
