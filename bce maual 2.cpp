#include <iostream>
using namespace std;

int main() {
    int list1[5];
    int list2[5];
    int sumList[5];
    int i; 

    cout << "Enter 5 numbers for first list: " << endl;
    for (i = 0; i < 5; i++) {
        cin >> list1[i];
    }

    cout << "Enter 5 numbers for second list: " << endl;
    for (i = 0; i < 5; i++) {
        cin >> list2[i];
    }

    for (i = 0; i < 5; i++) {
    
        sumList[i] = list1[i] + list2[i];
    }

    
    cout << "The sum of the two lists is: " << endl;
    for (i = 0; i < 5; i++) {
        cout << sumList[i] << " ";
    }
    cout << endl;

    return 0;
}
