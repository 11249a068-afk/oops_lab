						                                                         -----Dynamic Memory Allocation (new & delete)----

🧭 Aim:

//To write a C++ program that dynamically allocates memory for an array, accepts elements from the user, displays the entered elements, and then releases the allocated memory using delete[].//

🧭 Algorithm:
1.Start

2.Declare an integer variable n to store the size of the array.

3.Prompt the user to enter the size of the array.

4.Read the value of n from the user.

5.Dynamically allocate memory for an integer array of size n using the new operator.

6.Display a message asking the user to enter n elements.

7.Use a for loop to input all n elements into the array.

8.Display the message "You entered:" to show the stored elements.

9.Use another for loop to print all elements of the array.

10.Free the dynamically allocated memory using the delete[] operator.

11.End the program.

🧭 Code:
#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter size of array: ";
cin >> n;
int *arr = new int[n];
cout << "Enter " << n << " elements: ";
for (int i = 0; i < n; i++)
cin >> arr[i];
cout << "You entered: ";
for (int i = 0; i < n; i++)
cout << arr[i] << " ";
delete[] arr;
return 0;
}
