//Program to Find the Simple Interest
#include<iostream>
using namespace std;
int main()
{
	float p,r,t,si;
	cout<<"Enter the Principal Amount:";
	cin>>p;
	cout<<"Enter the Rate of Interest:";
	cin>>r;
	cout<<"Enter the Time Period:";
	cin>>t;
	si=(p*r*t)/100;
	cout<<"The Simple Interest is "<<si;
	return 0;
	}
