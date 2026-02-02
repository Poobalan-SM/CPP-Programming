#include<iostream>
using namespace std;
class cal
{
	int x,y,ans,op;
	public:
		void add(int x,int y);
		void sub(int x,int y);
		void mul(int x,int y);
		void div(int x,int y);
		void Mdiv(int x,int y);
		void input();
		void operation();
};
void cal::input()
{
	cout<<"Enter the X :";
	cin>>x;
	cout<<"Enter the Y :";
	cin>>y;
}
void cal::add(int x,int y)
{
	cout<<"The Addition of "<<x<<" and "<<y<<" is "<<x+y;
}
void cal::sub(int x,int y)
{
	cout<<"The Subtraction of "<<x<<" and "<<y<<" is "<<x-y;
}
void cal::mul(int x,int y)
{
	cout<<"The Multiplication of "<<x<<" and "<<y<<" is "<<x*y;
}
void cal::div(int x,int y)
{
	cout<<"The Division of "<<x<<" by "<<y<<" is "<<x/y;
}
void cal::Mdiv(int x,int y)
{
	cout<<"The Modulo Division of "<<x<<" by "<<y<<" is "<<x%y;
}
void cal::operation()
{
	cout<<"Enter the operation to be Done:"<<endl<<"1 to Addition"<<endl<<"2 to Subtraction"<<endl<<"3 to Multiplication"<<endl<<"4 to Divition"<<endl<<"5 to Modulo Divition"<<endl;
	cin>>op;
	switch(op)
	{
		case 1:
			add(x,y);
			break;
		case 2:
			sub(x,y);
			break;
		case 3:
			mul(x,y);
			break;
		case 4:
			div(x,y);
			break;
		case 5:
			Mdiv(x,y);
			break;
		default:
			cout<<"Wrong Input";
			break;
	}
}
int main()
{
	cal c;
	c.input();
	c.operation();
	return 0;
}
