#include <iostream>
using namespace std;
class Demo {
public:
    
    Demo() {
        cout << "Constructor invoked automatically! Object is created." << endl;
    }

    ~Demo() {
        cout << "Destructor invoked automatically! Object is destroyed." << endl;
    }
};

int main() {
    cout << "Inside main() function..." << endl;

    Demo obj;

    cout << "Program is about to end..." << endl;
    
    return 0;
}
