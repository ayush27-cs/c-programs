#include<iostream>
using namespace std;
class Instagram{
	private:
		int reels ;
	public:
		 Instagram()
		 {
		 	reels=0;
		 }
	void create(int count)
	{
		reels+=count;
	}
	int reelcreated()
	{
		return reels;
	}
};
int main()
{
	Instagram r;
	r.create(2);
	cout<<"Reels: "<<r.reelcreated();
	return 0;
}
