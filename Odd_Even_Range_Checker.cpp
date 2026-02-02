//Program to find the odd or even from 20 to 50
#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=20;i<=50;i++)
	{
		if(i%2==0)
			cout<<i<<" is a Even number"<<endl;
		else
			cout<<i<<" is a Odd number"<<endl;
	}
	return 0;
}
