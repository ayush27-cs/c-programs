#include<iostream>
using namespace std;

class Student {
    int roll;
public:
    Student(int r) {   
        roll = r;
        cout << "Parameterized constructor called\n";
    }

    Student(const Student &s) {   
        roll = s.roll;
        cout << "Copy constructor called\n";
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    Student s1(101);  
    Student s2(s1);  
}

