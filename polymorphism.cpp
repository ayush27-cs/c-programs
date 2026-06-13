#include<iostream>
using namespace std;

class Vehicle{
	public:
	void start(){
		cout<<"Vehicle Started"<<endl;
	}
};
class car:public Vehicle{
	public:
		void horn(){
			cout<<"Car Horn"<<endl;
		}
};
int main(){

car c;
c.start();
c.horn();
return 0;
}

