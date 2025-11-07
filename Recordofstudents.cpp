  
                                                              1.RECORDS OF STUDENTS   

🧭 Ai

To write a C++ program that defines a class student having data members name, rollno, and marks, and to display the details of multiple students using a member function.

🧭 Algorithm

STEP 1

STEP 1:Start the program.

STEP 2:Include the required header file #include <iostream>.

STEP 3:Use the std namespace so that standard C++ objects (like cout, string) can be used without the std:: prefix.

Define a class named student with the following members:

Data members:

STEP 4: string name — to store the student’s name.

int rollno — to store the student’s roll number.

float marks — to store the student’s marks.

Member function:

void display() — to print the student’s details.

STEP 5:In the main() function:

Create three objects of the class: s1, s2, and s3.

Assign values to their data members (name, rollno, marks).

Call the display() function for each object to print the details.

STEP 6:End the program.

🧭 Code

#include<iostream.h>
using namespace std;
class student
{
    public:
    string name;
    int roll no;
    float marks;
    void display()
    {
        cout<<"name;"<<name
        <<",roll no;"<<roll no
        <<",marks;"<<marks<<endl;
    }
};
int main()
{
    student s1,s2,s3;
    s1.name = "rutu";
    s1.rollno = 122;
    s1.marks = 99.7;
    s2.name = "diva";
    s2.rollno = 100;
    s2.marks = 99.0;
    s3.name = "main";
    s3.rollno = 123;
    s3.marks = 100.0;
 s1.display();
 s2.display();
 s3.display();
return 0;



}

