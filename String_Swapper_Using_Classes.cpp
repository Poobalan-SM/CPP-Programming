#include<iostream>
using namespace std;
class str
{
	char ch1[10],ch2[10],t[10];
	public:
		void input();
		void swap();
		void output();
};
void str:: input()
{
	cout<<"Enter the first string :";
	gets(ch1);
	cout<<"Enter the Second string :";
	gets(ch2);
	cout<<"Before the Swap:"<<endl<<"String 1: ";
	puts(ch1);
	cout<<"String 2: ";
	puts(ch2);
}
void str::swap()
{
	for(int i=0;i<10;i++)
		t[i]=ch1[i];
	for(int i=0;i<10;i++)
		ch1[i]=ch2[i];
	for(int i=0;i<10;i++)
		ch2[i]=t[i];	
}
void str::output()
{
	cout<<"After the Swap:"<<endl<<"String 1: ";
	puts(ch1);
	cout<<"String 2: ";
	puts(ch2);
}
int main()
{
	str s;
	s.input();
	s.swap();
	s.output();
	return 0;
}
