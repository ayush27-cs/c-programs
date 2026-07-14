#include <iostream>
using namespace std;
class Calculator {
private:
    int num1, num2, sum;

public:
    Calculator(int a, int b) {
        num1 = a;
        num2 = b;
        sum = num1 + num2;
        cout << "Constructor invoked automatically! Numbers initialized." << endl;
    }
    void display() {
        cout << "Number 1 = " << num1 << endl;
        cout << "Number 2 = " << num2 << endl;
        cout << "Sum = " << sum << endl;
    }
    ~Calculator() {
        cout << "Destructor invoked! Object destroyed." << endl;
    }
};

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    Calculator obj(x, y);
    obj.display();

    return 0;
}
