                                                                          -----– Comparison Operator Overloading -----
                                                                                                                                   
🧭 Aim

//To overload the comparison operator..//

🧭 Algorithm
	
Step 1:
Start the program.

Step 2:
Define a class Rectangle with the following:

Data members: length and breadth (both integers).

Member functions:

getData() — to input the dimensions.

area() — to calculate the area.

Overloaded operator function operator>(Rectangle r) — to compare two rectangles based on their areas.

Step 3:
In the getData() function:

Display the message "Enter length and breadth: ".

Read length and breadth from the user.

Step 4:
In the area() function:

Calculate the area as length * breadth.

Return the calculated area.

Step 5:
In the overloaded operator function operator>(Rectangle r):

Compare the area of the calling object (this->area()) with the area of the passed object (r.area()).

Return true if the calling object’s area is greater; otherwise, return false.

Step 6:
In the main() function:

Create two objects: r1 and r2 of class Rectangle.

Call r1.getData() to input the first rectangle’s dimensions.

Call r2.getData() to input the second rectangle’s dimensions.

Use the overloaded operator > to compare: if (r1 > r2)

If true → display "Rectangle 1 is larger".

Else → display "Rectangle 2 is larger".

Step 7:
End the program.

🧭 Code

#include <iostream>
using namespace std;
class Rectangle {
int length, breadth;
public:
void getData() {
cout << "Enter length and breadth: ";
cin >> length >> breadth;
}
int area() {
return length * breadth;
}
bool operator>(Rectangle r) {
return this->area() > r.area();
}
};
int main() {
Rectangle r1, r2;
r1.getData();
r2.getData();
if (r1 > r2)
cout << "Rectangle 1 is larger" << endl;
else
cout << "Rectangle 2 is larger" << endl;
return 0;
}
