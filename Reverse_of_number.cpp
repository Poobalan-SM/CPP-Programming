//Program to find the Reverse of number
#include<iostream>
using namespace std;
int main()
{
	int num,digit,rev=0;
	cout<<"Enter the number to be Reverse:";
	cin>>num;
	while(num!=0)
	{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}
	cout<<"The Reverse of the number is "<<rev;
	return 0;
}
