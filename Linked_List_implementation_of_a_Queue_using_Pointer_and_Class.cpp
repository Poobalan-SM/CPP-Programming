 #include<iostream>
using namespace std;
class queue
{
	struct node
	{
		int data;
		node* next;
	}*head,*rear;
	public:
		void insert_queue(int x);
		void del_queue();
		void display();
		queue()
		{
			head=NULL;
			rear=NULL;
		}
};
void queue::insert_queue(int x)
{
	node* temp;
	temp=new node;
	temp->data=x;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		rear=temp;
	}
	else
	{
		rear->next=temp;
		rear=temp;
	}
}
void queue::del_queue()
{
	if(head==NULL)
		cout<<"It is Empty";
	else
	{
		int data=head->data;
		node *temp;
		temp=head;
		head=temp->next;
		delete(temp);
		cout<<"Deleted Element is "<<data<<endl;
	}
}
void queue::display()
{
	if(head==NULL)
		cout<<"It is Empty";
	else
	{
		node *temp;
		temp=head;
		cout<<"The list is ";
		while(temp!=rear)
		{
			cout<<temp->data;
			temp=temp->next;
		}
		cout<<endl;
	}
}
int main()
{
	queue s;
	s.insert_queue(1);
	s.insert_queue(2);
	s.insert_queue(3);
	s.insert_queue(4);
	s.insert_queue(5);
	s.insert_queue(6);
	s.display();
	s.del_queue();
	s.display();
	return 0;
}
