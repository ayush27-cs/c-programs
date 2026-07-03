//constructor
#include<iostream>
using namespace std;
class Student{
	int roll;
	public:
		Student(int r){
			roll=r;
			cout<<"Parameters constructor called\n";
			cout<<"Roll\n"<<roll;
		}
		
};
int main()
{
	Student s1(101);
}
