#include <iostream>
#include <string>
using namespace std;

void Menu() {
    cout << "\t\t-------Calculator-------\n";//You can also change operators to name to like + for addition etc 
    cout << "Press + for Addition\n";
    cout << "Press - for Subtraction\n";
    cout << "Press * for Multiplication\n";
    cout << "Press / for Division\n";
}

double addition(double x, double y) {
    double calculations=x + y;
    return calculations;
}

double subtraction(double x, double y) {
    double calculations=x - y;
    return calculations;
}

double multiplication(double x, double y) {
   double calculations=x * y;
    return calculations;
}

double division(double x, double y) {
    if (y!= 0) {
       double calculations=x/y;
    return calculations;
    } else {
        cout << "Error: Cam't Divide by zero" << endl;
        return 0; 
    }
}

int main() {
    Menu();
    string operation;
    cin >> operation;
    double num1, num2;
    cout << "Enter two numbers: \n";
    cout<<"Enter No. 1\t";
    cin >> num1;
    cout<<"Enter No. 2\t";
     cin >> num2;
    if (operation == "+") {
        cout << "Result: " << addition(num1, num2) << endl;
    } else if (operation == "-") {
        cout << "Result: " << subtraction(num1, num2) << endl;
    } else if (operation == "*") {
        cout << "Result: " << multiplication(num1, num2) << endl;
    } else if (operation == "/") {
        cout << "Result: " << division(num1, num2) << endl;
    } else{
        cout << "Invalid Input." << endl;
    }
    return 0;
}
