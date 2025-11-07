                                          ----8.EMPLOYEES SALARY SYSTEM----                                                                                                                              

🧭 Aim

To write a C++ program that defines a class Employee with data members such as id, name, and salary, and a member function to calculate and display a 10% bonus for each employee using constructors (including a default constructor).

🧭 Algorithm

1.Start the program.

2.Define a class Employee with private data members: id, name, salary.

3.Create a constructor with default arguments (i=0, n="Unknown", s=0.0) to initialize data members.

4,Define a member function calcBonus() that:

Calculates bonus as 0.1 * salary.

Prints the employee's ID, name, salary, and bonus.

5.In the main() function:

Create objects of Employee:

e1 and e2 using parameterized constructor.

e3 using default constructor.

Call calcBonus() for each employee.

6.End the program.

🧭 Code

#include <iostream>
using namespace std;
class Employee {
int id;
string name;
float salary;

public:
Employee(int i=0, string n="Unknown", float s=0.0) {
id=i; name=n; salary=s;
}
void calcBonus() {
float bonus = 0.1 * salary;
cout<<"ID: "<<id<<", Name: "<<name
<<", Salary: "<<salary
<<", Bonus: "<<bonus<<endl;
}
};
int main() {
Employee e1(101,"Ravi",50000);
Employee e2(102,"Priya",60000);
Employee e3; // default
e1.calcBonus();
e2.calcBonus();
e3.calcBonus();
return 0;
}
