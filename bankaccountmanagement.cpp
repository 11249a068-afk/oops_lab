                                       ----4.BANK ACCOUNT MANAGEMENT----

🧭 Aim

To write a C++ program that defines a class BankAccount to maintain customer account details using constructors, member functions, and a static data member to count the total number of accounts.

🧭 Algorithm
	
STEP 1:Start the program.

STEP 2:Include the header file #include <iostream> to allow input and output operations.

STEP3:Use the std namespace.

STEP 4:Define a class BankAccount containing:
Data members:

int accNo — to store account number.

string name — to store the account holder’s name.

float balance — to store the current balance.

static int count — to keep track of the total number of accounts created.

Constructors:

Default Constructor — initializes all data members to zero or empty values and increments count.

Parameterized Constructor — initializes data members with user-provided values and increments count.

Member functions:

deposit(float amt) — to add an amount to the balance.

withdraw(float amt) — to deduct an amount from the balance.

display() — to display account details.

static showCount() — to display the total number of accounts created.

STEP 5:Define and initialize the static data member count to 0 outside the class.

STEP 6:In the main() function:

Create objects using default and parameterized constructors.

Perform deposit and withdrawal operations.

Display each account’s details using the display() function.

Call the static function showCount() to display the total number of accounts created.

STEP 7:End the program.



🧭 Code

#include <iostream>
using namespace std;
class BankAccount {
int accNo;
string name;
float balance;
static int count;
public:
BankAccount() { accNo=0; name=""; balance=0; count++; }
BankAccount(int a, string n, float b) {
accNo=a; name=n; balance=b; count++;
}
void deposit(float amt) { balance += amt; }
void withdraw(float amt) { balance -= amt; }
void display() {
cout<<"Acc No: "<<accNo<<", Name: "<<name
<<", Balance: "<<balance<<endl;
}
static void showCount() {
cout<<"Total Accounts: "<<count<<endl;
}
};
int BankAccount::count=0;
int main() {
BankAccount b1, b2(1001,"Arjun",25000.75), b3(1002,"Meena",40000.50);
b1.deposit(5000);

b1.display();
b2.withdraw(2000);
b2.display();
b3.display();
BankAccount::showCount();
return 0;
}



