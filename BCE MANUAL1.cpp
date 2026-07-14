#include <iostream>
using namespace std;

int main() {
    
    int sub1, sub2, sub3, sub4, sub5;
    float total, percentage;
    cout << "Enter marks for 5 subjects: " << endl;
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total / 5.0;

    cout << "\n--- Results ---" << endl;
    cout << "Total Marks: " << total << " / 500" << endl;
    cout << "Percentage : " << percentage << "%" << endl;

    if (percentage >= 75 && percentage <= 100) {
        cout << "Division   : Honors" << endl;
    }
    
    else if (percentage >= 60 && percentage < 75) {
        cout << "Division   : 1st Division" << endl;
    }

    else if (percentage >= 45 && percentage < 60) {
        cout << "Division   : 2nd Division" << endl;
    }
    else if (percentage < 45 && percentage >= 0) {
        cout << "Division   : 3rd Division" << endl;
    }
    else {
        cout << "Invalid marks entered." << endl;
    }
    return 0;
}
