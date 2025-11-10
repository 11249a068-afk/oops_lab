                                                                    -----– Overloading Assignment Operator -----
                                                                                                                                   
🧭 Aim

//To demonstrate assignment operator overloading...//

🧭 Algorithm

Step 1:
Start the program.

Step 2:
Define a class Book with:

Data members:

title[50] — a character array to store the book title.

price — a float to store the book price.

Member functions:

getData() — to input book details.

operator=() — to copy data from one object to another (assignment operator overloading).

display() — to show book details.

Step 3:
In getData() function:

Display "Enter book title:" and input the title.

Display "Enter price:" and input the price.

Step 4:
In operator=() function:

Copy the title of the passed object (b.title) into the current object’s title using strcpy().

Copy the price value from the passed object (b.price) to the current object’s price.

Step 5:
In display() function:

Print the title and price of the book.

Step 6:
In the main() function:

Create two objects: b1 and b2 of class Book.

Call b1.getData() to input the first book’s details.

Use overloaded assignment operator to copy: b2 = b1;.

Display a message "Copied Book Details:".

Call b2.display() to show the copied details.

Step 7:
End the program.

🧭 Code

#include <iostream>
#include <string.h>
using namespace std;
class Book {
char title[50];
float price;
public:
void getData() {
cout << "Enter book title: ";

cin >> title;
cout << "Enter price: ";
cin >> price;
}
void operator=(Book &b) {
strcpy(title, b.title);
price = b.price;
}
void display() {
cout << "Title: " << title << ", Price: " << price << endl;
}
};
int main() {
Book b1, b2;
b1.getData();
b2 = b1;
cout << "\nCopied Book Details:\n";
b2.display();
return 0;
}
