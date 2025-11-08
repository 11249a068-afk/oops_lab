								---COMPANY LAPTOP---

🧭 Aim

//To write a C++ program that defines a class car with data members model, company, and price, and displays the details of cars using a member function.//

🧭 Algorithm

	
1. Start the program.
2. Define a class Laptop with data members brand, processor, and ram.
3. Define the member function display() to print laptop details.
4. In main(), create two objects l1 and l2.
5. Assign values to the data members.
6. Call display() for each object.
7. Stop the program.

🧭 Code
#include<iostream>
using namespace std;
class laptop
{
    public:
    string brand;
    string processor;
    int ram;
    void display(){
        cout<<"brand:"<<brand<<"processor;"<<processor<<"ram"<<ram<< "gb"<<endl;   
}
};
int main(){
    laptop l1, l2;
    l1.brand ="samsung";
    l1.processor ="i9";
    l1.ram = 8;
    l2.brand ="acer";
    l2.processor ="amd ryzen 5";
    l2.ram = 16;
    l1.display();
    l2.display();
    return 0;
}



