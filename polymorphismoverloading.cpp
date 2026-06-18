//polmorphism
#include<iostream>
using namespace std;
class sum{
	public:
		int add(int a,int b){
			return a+b;
		}
	public:
		float add(float a,float b){
			return a+b;
		}
};
int main()
{
	sum s;
	cout<<"sum(int) = "<<s.add(2,5)<<endl;
	cout<<"sum(float) = "<<s.add(2.0f,4.0f)<<endl;
}
