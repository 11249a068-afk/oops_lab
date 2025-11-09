					                                 ----Derived Class Constructors----

🧭 Aim

//To demonstrate constructor/destructor order in inheritance..//

🧭 Algorithm


1. Define Book base and LibraryBook derived class.
2. Add constructors and destructors printing messages.


🧭 Code
#include <iostream>
using namespace std;
class Book {
public:
Book() { cout << "Base class Book constructor\n"; }
~Book() { cout << "Base class Book destructor\n"; }
};
class LibraryBook : public Book {
public:
LibraryBook() { cout << "Derived class LibraryBook constructor\n"; }
~LibraryBook() { cout << "Derived class LibraryBook destructor\n"; }
};
int main() {
LibraryBook lb;
}
