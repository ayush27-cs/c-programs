#include <iostream>
using namespace std;
class Student {
private:
    int rollNumber;

public:
    string name;
    void setRollNumber(int r);
    void displayDetails();
};
void Student::setRollNumber(int r) {
    rollNumber = r;
}

void Student::displayDetails() {
    cout << "Student Name: " << name << endl;
    cout << "Roll Number: " << rollNumber << endl;
}

int main() {
    Student studentObj;
    studentObj.name = "Ayush"; 
    studentObj.setRollNumber(27); 
    
    cout << "--- Student Information ---" << endl;
    studentObj.displayDetails(); 

    return 0;
}
