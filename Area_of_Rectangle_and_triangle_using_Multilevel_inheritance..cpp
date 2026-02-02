//Program to find Area of Rectangle and triangle using Multilevel inheritance.
#include <iostream>
using namespace std;
class Rectangle
{
	public:
	int len,bre;
	void rarea() 
	{
		cout<<"Enter the Length and Breath of Rectangle :"<<endl;
		cin>>len;
		cin>>bre;
		cout<<"Area of Rectangle :"<<len*bre<<endl<<endl;
	}
};
class Triangle: public Rectangle
{
	public:
	void tarea()
	{
		int bre, hei;
		cout<<"Enter the Breath and Height of Triangle :"<<endl;
		cin>>bre;
		cin>>hei;
		cout<<"Area of Triangle :"<<0.5*bre*hei<<endl;
	}
};
class Area: public Triangle
{
	public:
	void area() 
	{
		rarea();
		tarea();
	}
};
int main() 
{
	Area a;
	a.area();
	return 0;
}
