//Program to show access to public using Inheritance
#include <iostream>
using namespace std;
class mark
{
	public:
	float total=526;
};
class place: public mark
{
	public:
	float rank=2;
};
int main() 
{
place p1;
cout<<"Total Mark: "<<p1.total<<endl;
cout<<"Rank in Class: "<<p1.rank<<endl;
return 0;
}
