#include <iostream>
using namespace std;
class Number {
private:
    int x, y;

public:
    Number(int a, int b) {
        x = a;
        y = b;
    }
    void operator - () {
        x = -x;
        y = -y;
    }
    void display() {
        cout << "X = " << x << ", Y = " << y << endl;
    }
};

int main() {
    Number num(10, -20);

    cout << "Before overloading unary minus:" << endl;
    num.display();
    -num; 

    cout << "\nAfter overloading unary minus (signs changed):" << endl;
    num.display();

    return 0;
}
