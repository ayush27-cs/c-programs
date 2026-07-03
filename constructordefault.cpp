//constructor
#include<iostream>
using namespace std;
class Student{
	int roll;
	public:
		Student(){
			roll=0;
			cout<<"Default constructor called\n";
		}
		
};
int main()
{
	Student s1;
}
