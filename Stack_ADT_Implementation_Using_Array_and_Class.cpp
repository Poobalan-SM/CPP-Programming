#include<iostream>
#define max 5
using namespace std;
class stack
{
	int a[max];
	int top;
	public:
		stack()
		{
			top=-1;
		}
		void push(int x);
		int pop();
		void del();
		void display();
};
void stack::push(int x)
{
	if(top==max-1)
		cout<<"Stack is Full"<<endl;
	else
	{
		top++;
		a[top]=x;
		cout<<"After push "<<x<<" stack is ";
		display();
	}
}
int stack::pop()
{
	if(top==-1)
		cout<<"Stack is Empty"<<endl;
	else
	{
		int data=a[top];
		a[top]=0;
		top--;
		return data;
	}
}
void stack::del()
{
	while(top>=0)
	{
		a[top]=0;
		top--;
	}
	cout<<"The stack is deleted "<<endl;
}
void stack::display()
{
	for (int i=top;i>=0;i--)
		cout<<a[i]<<" ";
	cout<<endl;
}
int main()
{
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	int i=s.pop();
	cout<<"Popped elment is "<<i<<endl;
	s.del();
	i=s.pop();
	return 0;
}
