                                                                       -----String Concatenation Using Operator Overloading -----
                                                                                                                                   
🧭 Aim

//To implement string concatenation using + operator..//

🧭 Algorithm
	
Step 1:
Start the program.

Step 2:
Define a class StringConcat with:

A character array str[50] to store the string.

A member function getString() to input a string.

An overloaded operator function operator+() to concatenate two strings.

A member function display() to show the result.

Step 3:
In getString() function:

Display the message "Enter string: ".

Accept a string from the user and store it in str.

Step 4:
In the overloaded operator+() function:

Create a temporary object temp of type StringConcat.

Copy the calling object’s string (str) into temp.str using strcpy().

Concatenate the string from the passed object (s.str) to temp.str using strcat().

Return temp (the concatenated result).

Step 5:
In the display() function:

Print "Resultant String: " followed by the value of str.

Step 6:
In the main() function:

Create three objects s1, s2, and s3 of class StringConcat.

Call s1.getString() to input the first string.

Call s2.getString() to input the second string.

Perform concatenation using overloaded operator: s3 = s1 + s2;

Call s3.display() to print the concatenated string.

Step 7:
End the program.

🧭 Code

#include <iostream>
#include <string.h>
using namespace std;
class StringConcat {
char str[50];
public:
void getString() {
cout << "Enter string: ";
cin >> str;
}
StringConcat operator+(StringConcat s) {
StringConcat temp;
strcpy(temp.str, str);
strcat(temp.str, s.str);
return temp;
}
void display() {
cout << "Resultant String: " << str << endl;
}
};
int main() {
StringConcat s1, s2, s3;
s1.getString();
s2.getString();
s3 = s1 + s2;
s3.display();
return 0;
}
