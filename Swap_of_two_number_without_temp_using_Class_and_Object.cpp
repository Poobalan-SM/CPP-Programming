//swap of two number without temp (class and object)
#include<iostream>
using namespace std;
class Swap
{
	public:
	int a,b;
};
int main()
{
	Swap s;
	cout<<"Enter the value for a: ";
	cin>>s.a;
	cout<<"Enter the value for b: ";
	cin>>s.b;
	s.a=s.a+s.b;
	s.b=s.a-s.b;
	s.a=s.a-s.b;
	cout<<"After the Swap:"<<endl;
	cout<<"value at a :"<<s.a<<endl;
	cout<<"Value at b :"<<s.b<<endl;
	return 0;
}
