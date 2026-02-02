#include<iostream>
using namespace std;
class listadt
{
	struct node
	{
		int data;
		node *next,*prev;
	}*head;
	public:
		listadt()
		{
			head=NULL;
		}
		void insert_end(int x);
		void insert_beg(int x);
		void insert_pos(int,int);
		void delete_ele(int x);
		void find(int x);
		void display();
};
void listadt::insert_end(int x)
{
	node *temp,*r;
	if(head==NULL)
	{
		temp=new node;
		temp->data=x;
		temp->next=NULL;
		temp->prev=NULL;
		head=temp;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
			temp=temp->next;
		r=new node;
		r->data=x;
		r->next=NULL;
		r->prev=temp;
		temp->next=r;
	}
	cout<<"The list after insert end is";
	display();
}
void listadt::insert_beg(int x)
{
	node *temp;
	temp=new node;
	temp->data=x;
	temp->next=head;
	temp->prev=NULL;
	head=temp;
	temp->next->prev=temp;
	cout<<"The list after inserting beg is ";
	display();
}
void listadt::insert_pos(int x,int p)
{
	node *temp,*r;
	temp=head;
	for(int i=1;i<=(p-2);i++)
		temp=temp->next;
	r=new node;
	r->data=x;
	r->next=temp->next;
	r->prev=temp;
	temp->next=r;
	r->next->prev=r;
	cout<<"The list after insert at position "<<p<<" is ";
	display();
}
void listadt::delete_ele(int x)
{
	node *temp;
	temp=head;
	while(temp->data!=x)
		temp=temp->next;
	temp->next->prev=temp->prev;
	temp->prev->next=temp->next;
	delete(temp);
	cout<<"The list after deleting "<<x<<" is ";
	display();
}
void listadt::find(int x)
{
	node *temp;
	int c=0;
	temp=head;
	while(temp!=NULL && temp->data!=x)
	{
		temp=temp->next;
		c++;
	}
	cout<<"The "<<x<<"in the position of "<<(c+1)<<endl;
}
void listadt::display()
{
	node *temp;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main()
{
	listadt s;
	s.insert_end(5);
	s.insert_end(10);
	s.insert_end(15);
	s.insert_end(20);
	s.insert_end(21);
	s.insert_end(3);
	s.insert_beg(2);
	s.insert_pos(6,3);
	s.find(21);
	s.delete_ele(20);
	return 0;
}
