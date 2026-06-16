#include<iostream>
using namespace std;
class university{
	public:
		void name1(){
			cout<<"RGPV"<<endl;
		}
};
class college:public university{
	public:
		void name2(){
			cout<<"SAIT"<<endl;
		}
};
int main()
{
	college n;
	n.name1();
	n.name2();
	return 0;
}
