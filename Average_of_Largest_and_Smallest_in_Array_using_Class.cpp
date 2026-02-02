#include<iostream>
using namespace std;
class avg
{
	int a[5],lr,sm,res;
	public:
		void input();
		void average();
		void output();
};
void avg::input()
{
	cout<<"Enter the Elements in the Array: ";
	for (int i=0;i<5;i++)
		cin>>a[i];
}
void avg::average()
{
	sm=lr=a[0];
	for (int i=0;i<5;i++)
		if(lr<a[i])
			lr=a[i];
	for (int i=0;i<5;i++)
		if(sm>a[i])
			sm=a[i];
}
void avg::output()
{
	res=(lr+sm)/2;
	cout<<"The average of the Largest and Smallest number in the List is "<<res;
}
int main()
{
	avg a;
	a.input();
	a.average();
	a.output();
}
