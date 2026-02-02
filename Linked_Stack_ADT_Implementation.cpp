 #include<iostream>
using namespace std;
class stack
{
	struct node
	{
		int data;
		node *next;
	}*top;
	public:
		stack()
		{
			top==NULL;
		}
		void push(int x);
		int pop();
		void del();
		void display();
};
void stack::push(int x)
{
	node *temp;
	temp=new node;
	temp->data=x;
	if(top==NULL)
	{
		temp->next=NULL;
		top=temp;
	}
	else
	{
		temp->next=top;
		top=temp;
	}
	cout<<"After pushing "<<x<<" the stack is ";
	display();
}
int stack::pop()
{
	if(top==NULL)
		cout<<"The Stack is Empty "<<endl;
	node *temp;
	temp=top;
	int data=temp->data;
	top=top->next;
	delete(temp);
	return data;
}
void stack::del()
{
	while(top!=NULL)
	{
		pop();
	}
}
void stack::display()
{
	if(top==NULL)
		cout<<"The Stack is Empty "<<endl;
	else
	{
		node *temp;
		temp=top;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
}
int main()
{
	int a;
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	a=s.pop();
	cout<<"The Popped element is "<<a<<endl;
	s.display();
	s.del();
	s.display();
	return 0;
}
