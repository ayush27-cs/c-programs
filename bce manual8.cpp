#include <iostream>
using namespace std;
int sum(int a, int b) {
    return a + b;
}
double sum(double a, double b) {
    return a + b;
}

int main() {
    int intResult = sum(10, 20); 
    double doubleResult = sum(5.5, 4.5); 
    cout << "Calling sum() with integers (10, 20): " << intResult << endl;
    cout << "Calling sum() with doubles (5.5, 4.5): " << doubleResult << endl;

    return 0;
}
