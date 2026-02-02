#include<iostream>
using namespace std;
class sum
{
	int n, sumn;
	public:
		void input();
		void sumf();
		void output();
};
void sum::input()
{
	cout<<"Enter the Number:";
	cin>>n;
}
void sum::sumf()
{
	int r;
	sumn=0;
	while(n!=0)
	{
		r=n%10;
		sumn=sumn+r;
		n=int(n/10);
	}
}
void sum::output()
{
	cout<<"The sum of digit is "<<sumn;
}
int main()
{
	sum s;
	s.input();
	s.sumf();
	s.output();
	return 0;
}
