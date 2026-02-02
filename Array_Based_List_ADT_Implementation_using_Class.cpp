#include<iostream>
#define max 20
using namespace std;
class listadt
{
	int a[max],n;
	int data,index;
	public:
		listadt()
		{
			index=-1;
		}
		void input();
		void insert();
		void retrieve();
		void del_e();
		void search();
		void display();
		void del_lst();
};
void listadt::input()
{
	cout<<"Enter the number of Elements :";
	cin>>n;
	cout<<"Enter the Elements :";
	for (int i=0;i<n;i++)
		cin>>a[i];
	index=n-1;
	display();
}
void listadt::insert()
{
	if(index==max-1)
		cout<<"Sorry! : The list is full";
	int pos;
	cout<<"Enter the data to be insert and its position:";
	cin>>data>>pos;
	for (int i=index;i>=pos-1;i--)
		a[i+1]=a[i];
	a[pos-1]=data;
	index++;
	display();
}
void listadt::display()
{
	cout<<"The List is "<<endl;
	for(int i=0;i<=index;i++)
		cout<<a[i]<<endl;
}
void listadt::retrieve()
{
	int pos;
	cout<<"Enter the position of the Element:";
	cin>>pos;
	cout<<"The element in the position "<<pos<<" is "<<a[pos-1]<<endl;
}
void listadt::del_e()
{
	if(index==(-1))
		cout<<"Sorry! : The List is empty";
	int pos;
	cout<<"Enter the position to Delete: ";
	cin>>pos;
	for (int i=pos-1;i<=index;i++)
		a[i]=a[i+1];
	a[index]=0;
	index--;
	display();
}
void listadt::search()
{
	int ser;
	cout<<"Enter the search element:";
	cin>>ser;
	for(int i=0;i<=index;i++)
		if(a[i]==ser)
			cout<<"The search element "<<ser<<" is in position "<<i+1;
}	
int main()
{
	listadt ls;
	ls.input();
	ls.insert();
	ls.retrieve();
	ls.del_e();
	ls.search();
	return 0;
}
