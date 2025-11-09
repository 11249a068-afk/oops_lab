						                                                        ---String Class using new---
🧭 Aim:
//To write a C++ program that demonstrates dynamic memory allocation using a class, by creating and displaying strings with a user-defined constructor, destructor, and member function.//

🧭 Algorithm:

1.Start

2.Include the header files <iostream> and <cstring>.

3.Define a class named MyString.

4.Declare a private data member char *str to store the string dynamically.

5.Define a constructor MyString(const char *s = "") that:

Allocates memory dynamically using new.

Copies the passed string s into str using strcpy().

6.Define a member function display() to output the string stored in str.

7.Define a destructor ~MyString() that frees the dynamically allocated memory using delete[].

8.In the main() function:

Create two MyString objects s1("Hello") and s2("World").

Call display() for both objects to print their strings.

9.End the program.

🧭 Code:

#include <iostream>
#include <cstring>
using namespace std;
class MyString {
char *str;
public:
MyString(const char *s = "") {
str = new char[strlen(s) + 1];
strcpy(str, s);
}
void display() { cout << str << endl; }
~MyString() { delete[] str; }
};
int main() {
MyString s1("Hello");
MyString s2("World");
s1.display();
s2.display();
}
