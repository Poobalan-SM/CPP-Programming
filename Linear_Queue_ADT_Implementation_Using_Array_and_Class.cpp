 #include<iostream>
#define max 10
using namespace std;
class queue
{
	int a[max];
	int front,rear;
	public:
		queue()
		{
			front=-1;
			rear=-1;
		}
		void insert_queue(int x);
		void del_queue();
		void display();
};
void queue::insert_queue(int x)
{
	if(rear==max-1)
		cout<<"List is Full";
	else
	{
		front=0;
		rear++;
		a[rear]=x;
	}
}
void queue::del_queue()
{
	if(front==-1)
		cout<<"It is Empty ";
	else
	{
		if(front==rear)
			front=rear=-1;
		else
			front++;
	}
}
void queue::display()
{
	if(front==-1)
		cout<<"Empty";
	else
	{
		cout<<"The list is ";
		for(int i=front;i<=rear;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}
int main()
{
	queue q;
	q.insert_queue(1);
	q.insert_queue(2);
	q.insert_queue(3);
	q.insert_queue(4);
	q.insert_queue(5);
	q.insert_queue(6);
	q.insert_queue(7);
	q.insert_queue(8);
	q.insert_queue(9);
	q.insert_queue(10);
	q.display();
	q.del_queue();
	q.display();
	return 0;
}
