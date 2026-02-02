#include<iostream>
using namespace std;
class facfib
{
	int num,fact;
	public:
		void input();
		void factorial();
		void fibonacci();
};
void facfib::input()
{
	cout<<"Enter the number:";
	cin>>num;
}
void facfib::factorial ()
{
	fact=1;
	for(int i=1;i<=num;i++)
		fact=fact*i;
	cout<<"The factorial of the number "<<num<<" is "<<fact<<endl;
}
void facfib::fibonacci()
{
	int n1=0,n2=1,n3,i;
	cout<<"The Fibonacci Series is ";
	cout<<n1<<" "<<n2;
	while(1) 
	{
		n3=n1+n2;
		if(n3>num)
			break;
		cout<<" "<<n3;
		n1=n2;
		n2=n3;
	}
}
int main()
{
	facfib f;
	f.input();
	f.factorial();
	f.fibonacci();
	return 0;
}
