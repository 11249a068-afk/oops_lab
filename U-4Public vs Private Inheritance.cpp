						                                                    ----Public vs Private Inheritance----

🧭 Aim:

//The aim of this C++ code is to demonstrate the accessibility of base class members in derived classes using public and private inheritance..//

🧭 Algorithm:
1.Define a base class Base with a public member function show().
2.Create two derived classes: PublicDerived and PrivateDerived, inheriting from Base using public and private inheritance respectively.
3.In both derived classes, define a public member function display() that calls the show() function from the base class.
4.In the main() function:
Create objects of PublicDerived and PrivateDerived.Call the display() function on both objects to demonstrate accessibility.
Attempt to call the show() function directly on both objects to demonstrate inaccessibility.

🧭 Code:
#include <iostream>
using namespace std;

class Base {
public:
void show() { cout << "Base public function\n"; }
};
class PublicDerived : public Base {
public:
void display() { show(); }
};
class PrivateDerived : private Base {
public:
void display() { show(); } // accessible here
};
int main() {
PublicDerived pub;
PrivateDerived pri;
pub.display(); // Works
pri.display(); // Works
// pub.show(); // Error
// pri.show(); // Error
}
