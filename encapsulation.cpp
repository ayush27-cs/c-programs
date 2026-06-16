#include<iostream>
using namespace std;
class BankAccount{
	private:
	int balance ;
	public:
	BankAccount()
	{
		balance=0;
	}
	void deposits(int amount)
	{
		balance+=amount;
	}
	int getbalance()
	{
		return balance;
	}
};
int main()
{
	BankAccount acc;
	acc.deposits(1000);
	cout<<" Balance = "<<acc.getbalance();
	return 0;
}

