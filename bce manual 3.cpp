#include <iostream>
using namespace std;
int add(int a, int b);
int multiply(int a, int b);

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int sumResult = add(num1, num2);
    int prodResult = multiply(num1, num2);

    cout << "Sum = " << sumResult << endl;
    cout << "Multiplication = " << prodResult << endl;

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}
