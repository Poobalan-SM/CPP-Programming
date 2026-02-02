  #include<iostream>
using namespace std;
class listadt
{
	struct node
	{
		int data;
		node *next;
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
		node* find_prev(int x)
		{
			node *temp;
			temp=head;
			while(temp->next!=NULL&&temp->next->data!=x)
				temp=temp->next;
			return temp;
		}
		int islast(node *x)
		{
			node *temp;
			temp=x;
			if(x->next==NULL)
				return 1;
			else
				return 0;
		}
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
		temp->next=r;
	}
	cout<<"The List after insert end is ";
	display();
}
void listadt::insert_beg(int x)
{
	node *temp;
	temp=new node;
	temp->data=x;
	temp->next=head;
	head=temp;
	cout<<"The List after inserting end is";
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
	temp->next=r;
	cout<<"The list after insertion at position is ";
	display();	
}
void listadt::delete_ele(int x)
{
	node *temp,*prev;
	prev=find_prev(x);
	if(!islast(prev))
	{
		temp=prev->next;
		prev->next=temp->next;
		delete(temp);
	}
	cout<<"The List after deletion is ";
	display();
}
void listadt::find(int x)
{
	node *temp;
	int c=0;
	temp=head;
	while(temp!=NULL && temp->data!=x)
	{
		c++;
		temp=temp->next;
	}
	cout<<"The"<<x<<"is found in position is "<<c<<endl;
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
	s.delete_ele(20);
	return 0;
}
