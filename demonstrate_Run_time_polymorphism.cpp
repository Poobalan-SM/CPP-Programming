//Program to demonstrate Run time polymorphism
#include <iostream>
using namespace std;
class B
{
    public:
    virtual void Display()
    {
        cout<<"\n The member function Display()";
        cout<<"of the \"Base Class B\" is invoked \n";
    }
};
class D1:public B
{
	public:
    void Display()
    {
        cout<<"\n The member function Display()";
        cout<<"of the \"Derived Class D1\" is invoked \n";
    }
};
class D2:public B
{
    public:
    void Display()
    {
    	cout<<"\n The member function Display()";
        cout<<"of the \"Derived Class D2\" is invoked";
    }
};
int main()
{
    B*base;
    D1 der1;
    D2 der2;
    base=&der1;
	base->Display( );
    base=&der2;
    base->Display();
	return 0;
}
