
                                     ----5. CAR MODEL CPP---

🧭 Aim

To write a C++ program that defines a class car with data members model, company, and price, and displays the details of cars using a member function.

🧭 Algorithm
	
STEP 1: Start the program.

STEP 2:Include the header file #include <iostream> for input/output operations.

STWP 3:Use the std namespace to avoid using std:: prefix.

STEP 4 :Define a class car with the following members:

Data Members:

string model — to store the model name.

string company — to store the company name.

int price — to store the price of the car.

Member Function:

void display() — to print the details of the car.

STEP 5:In the main() function:

Create two objects c1 and c2 of class car.

Assign values to the data members of both objects.

Call the display() function for each object.

STEP 6:End the program.


🧭 Code
#include<iostream>
using namespace std;
class car
{
    public:
    string model;
    string company;
    int price;
    void display(){
        cout<<"model:"<<model<<"company;"<<company<<"price"<<price<<endl;   
}
};
int main(){
    car c1, c2;
    c1.model ="samsung";
    c1.company ="i9";
    c1.price = 120000;
    c2.model ="acer";
    c2.company ="amd ryzen 5";
    c2.price = 130000;
    c1.display();
    c2.display();
    return 0;
}


