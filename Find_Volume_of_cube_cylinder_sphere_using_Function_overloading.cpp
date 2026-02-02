//Program to find volume of cube, cylinder, sphere.
#include<iostream>
using namespace std;
const float p=3.1428571428571;
class cal
{
	public:
	void volume(int a)
	{
		cout<<"Volume of cube :"<<a*a*a<<endl<<endl;
	}
	void volume(float r,float h)
	{
		cout<<"Volume of cylinder :"<<p*r*r*h<<endl<<endl;
	}
	void volume(float r)
	{
		cout<<"Volume of sphere :"<<(4*p*r*r*r)/3;
	}
};
int main()
{
	cal o;
	int a;
	float b,c;
	cout<<"Enter the side length of cube :";
	cin>>a;
	o.volume(a);
	cout<<"Enter the radius of cylinder :";
	cin>>b;
	cout<<"Enter the height of cylinder :";
	cin>>c;
	o.volume(b,c);
	cout<<"Enter the radius of sphere :";
	cin>>b;
	o.volume(b);
	return 0;
}
