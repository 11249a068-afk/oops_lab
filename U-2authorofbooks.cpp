                                --- 3. AUTHORS OF BOOKS----

🧭 Aim

//To write a C++ program that demonstrates the use of default constructor, parameterized constructor, and copy constructor using a class Book.//

🧭 Algorithm
	
STEP 1:Start the program.

STEP 2:Include the header file #include <iostream> to enable input/output operations.

STEP 3:Use the std namespace.

STEP 4:Define a class Book with the following members:

Data Members:

string title — to store the title of the book.

string author — to store the author’s name.

float price — to store the price of the book.

Constructors:

Default Constructor — initializes data members with default values.

Parameterized Constructor — initializes data members with given values.

Copy Constructor — initializes an object using another object of the same class.

Member Function:

display() — displays the values of the data members.

STEP 5:In the main() function:

Create an object b1 using the default constructor.

Create an object b2 using the parameterized constructor with specific values.

Create an object b3 using the copy constructor, copying values from b2.

Call display() for each object to show the initialized data.

STEP 6:End the program.

🧭 Code
	
#include <iostream>
using namespace std;
class Book {
string title, author;
float price;
public:
Book() { title=""; author=""; price=0; }
Book(string t, string a, float p) {
title=t; author=a; price=p;
}
Book(const Book &b) {
title=b.title; author=b.author; price=b.price;
}
void display() {

cout<<"Title: "<<title<<", Author: "<<author
<<", Price: "<<price<<endl;
}
};
int main() {
Book b1;
Book b2("C++ Programming","Bjarne Stroustrup",750.50);
Book b3(b2);
cout<<"Default Constructor Object:"<<endl; b1.display();
cout<<"Parameterized Constructor Object:"<<endl; b2.display();
cout<<"Copy Constructor Object:"<<endl; b3.display();
return 0;
}

cout<<"Default Constructor Object:"<<endl; b1.display();
cout<<"Parameterized Constructor Object:"<<endl; b2.display();
cout<<"Copy Constructor Object:"<<endl; b3.display();
return 0;
}
