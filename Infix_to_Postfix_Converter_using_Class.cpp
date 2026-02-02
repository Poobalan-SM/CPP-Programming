#include<iostream>
#define max 20
using namespace std;
class stack
{
	char sta[max];
	public:
		int top;
		int prec(char c);
		void push(char x);
		int pop();
		void convert(char a[10]);
		char check();
		stack()
		{
			top=-1;
		}
};
void stack::push(char x)
{
	if(top==max-1)
		cout<<"Stack is Full"<<endl;
	else
	{
		top++;
		sta[top]=x;
	}
}
int stack::pop()
{
	if(top==-1)
		cout<<"Stack is Empty"<<endl;
	else
	{
		int data=sta[top];
		sta[top]=0;
		top--;
		return data;
	}
}
void stack::convert(char a[10])
{
	for(int i=0;a[i]!='\0';i++)
	{
		int p;
		p=prec(a[i]);
		if(p==-1)
			cout<<char(a[i]);
		if(p>-1||top==0)
			push(a[i]);	
		for(int i=top;top>1;i++)
		{
			if(a[i]=='(')
				push(a[i]);
			else if(prec(a[i])>(prec(check())))
			{
				push(a[i]);
				break;
			}
			else if(prec(a[i])<(prec(check())))
			{
				char c=pop();
				cout<<c;
				push(a[i]);
			}
			else if (a[i]==')')
			{
				while(sta[top]!='(')
				{
					char c=pop();
					cout<<c;
				}
				pop();
			}
		}
		
	}
	while(top!=-1)
	{
		char c=pop();
		cout<<c;
	}
}
int stack::prec(char c)
{
	if(c=='*')
		return 4;
    else if(c=='/')
       	return 3;
    else if(c=='+')
    	return 2;
	else if(c=='-')
       	return 1;
    else
        return -1;
}
char stack::check()
{
	return sta[top];
}
int main()
{
	char exp[20];
	stack ob;
    cout<<"Enter the Expression:";
    cin>>exp;
    ob.convert(exp);
    return 0;
}

