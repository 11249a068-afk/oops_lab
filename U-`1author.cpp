                                           ----- 2. AUTHOR CPP PROGRAM-----
                                                                                                                                   
🧭 Aim

//To write a C++ program that defines a class book with data members title, author, and price, and to display the details of books using a member function.//

🧭 Algorithm
	
STEP 1:Start the program.

STEP 2:Include the header file #include <iostream> to use input/output functions.

STEP 3:Use the std namespace so that we can directly use cout, string, etc.

STEP 4:Define a class book containing:

Data members:

string title — to store the book title.

string author — to store the author’s name.

float price — to store the price of the book.

Member function:

void display() — to display the details of a book (title, author, price).

STEP 5:In the main() function:

Create two objects of class book: b1 and b2.

Assign values to each book’s data members (title, author, price).

Call the display() function for both objects to print their details.

STEP 6:End the program.

🧭 Code
#include<iostream>
using namespace std;
class book
{
    public:
    string title;
    string author;
    float price;
    void display(){
    cout<<"title "<<title<<endl;
    cout<<"author "<<author<<endl;
    cout<<"price "<<price<<endl;
}
};
int main(){
    book b1,b2;
    b1.title="c++ programming";
    b1.author="bjame stroustrup";
    b1.price=200;
    b2.title="data structures";
    b2.author="mark allemn weiss";
    b2.price=800;
    b1.display();
    b2.display();
    return 0;

}





