                                ---7. BANK ACCOUNT DETAILS---

🧭 Aim

To implement a class Account that stores customer account details.

🧭 Algorithm

	
1. Start the program.
2. Define a class Account with accNo, name, and balance.
3. Define a function display() to show account details.
4. In main(), create two Account objects.
5. Assign values to data members.
6. Display the details.
7. Stop the program.

🧭 Code

#include <iostream> 
using namespace std;

class account
{
public:
    int acc_no;
    string name;
    float balance;

    void display()
    {
        cout << "Account No: " << acc_no << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    account a1, a2;

    a1.acc_no = 1001;
    a1.name = "Ramesh";
    a1.balance = 25000.50f;  

    a2.acc_no = 1002;
    a2.name = "Sita";
    a2.balance = 4000.75f;  
    a1.display();
    a2.display();

    return 0;
}


