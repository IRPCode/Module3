#include <iostream>

using namespace std;

int main()
{
    //initialize variables
    int num1;
    int num2;
    int num3;

    //get values for variables and initializes pointers
    cout << "Enter a number" << endl;
    cin >> num1;
    int* ptr1 = &num1;
    cout << "Enter a number" << endl;
    cin >> num2;
    int* ptr2 = &num2;
    cout << "Enter a number" << endl;
    cin >> num3;
    int* ptr3 = &num3;

    //print out results for address and values
    cout << "The first number was: " << num1 << ". It's memory address is: "<< ptr1 << "." << endl;
    cout << "The second number was: " << num2 << ". It's memory address is: "<< ptr2 << "." << endl;
    cout << "The third number was: " << num3 << ". It's memory address is: "<< ptr3 << "." << endl;
}
