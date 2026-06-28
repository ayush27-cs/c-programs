//abstraction
#include<iostream>
using namespace std;
class ATM{
	public:
		void withdraw(){
			int amount=2700;
			cout<<"Money is withdrawn = "<< amount <<endl;
			
		}
	private:
		
	    void enterPIN(){
			cout<<"Pin entered succesfully"<<endl;
		}
		void dispenseCash(){
			cout<<"Cash dispensed"<<endl;
		}
		
		
};
int main()
{
	ATM money;
	money.withdraw();
	return 0;

}
