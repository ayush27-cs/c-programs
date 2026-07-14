#include <iostream>
using namespace std;
class Animal {
protected:
    string name;
public:
    void setBaseDetails(string n) {
        name = n;
    }
    void displayBase() {
        cout << "Animal Name (Base Class Property): " << name << endl;
    }
};
class Dog : public Animal {
private:
    string breed;
public:
    void setDerivedDetails(string b) {
        breed = b;
    }
    void displayDerived() {
        cout << "Dog Breed (Derived Class Property): " << breed << endl;
    }
};
int main() {
    Animal myAnimal;
    Dog myDog;
    cout << "--- Base Class Object Execution ---" << endl;
    myAnimal.setBaseDetails("Generic Animal");
    myAnimal.displayBase(); 
    cout << "\n--- Derived Class Object Execution ---" << endl;
    myDog.setBaseDetails("Tommy"); 
    myDog.setDerivedDetails("German Shepherd");
    myDog.displayBase();  
    myDog.displayDerived(); 

    return 0;
}
