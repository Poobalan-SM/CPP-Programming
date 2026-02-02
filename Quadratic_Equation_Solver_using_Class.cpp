#include<iostream>
#include<math.h>
using namespace std;
class equ
{
	int a,b,c,r1,r2;
	public:
		void input();
		void root();
		void output();
};
void equ::input()
{
	cout<<"Enter the x^2 coordinate:";
	cin>>a;
	cout<<"Enter the x coordinate:";
	cin>>b;
	cout<<"Enter the constant:";
	cin>>c;
	cout << "You Entered "<<a<<"x^2 +"<<b<<"x +"<<c<<endl ;
}
void equ::root()
{
	r1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
	r2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
}
void equ::output()
{
	cout<<"The Roots are "<<r1<<" and "<<r2<<endl;
	if ((b*b)>(4*a*c))
		cout<<"The roots are Real and Distint";
	else if ((b*b)==(4*a*c))
		cout<<"The roots are Real and Equal";
	else
		cout<<"The roots are Imaginary";
}
int main()
{
	equ q;
	q.input();
	q.root();
	q.output();
	return 0;
}
