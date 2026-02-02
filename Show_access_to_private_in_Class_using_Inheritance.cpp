// Program to show access to private
#include <iostream> 
using namespace std; 
class A 
{ 
	private:
	int a=23; 
	int b=28; 
	public: 
	int mul() 
	{ 
		int c=a*b; 
		return c; 
	} 
}; 
class B:private A 
{ 
	public: 
 	void display() 
	{ 
		int res=mul(); 
		cout <<"Multiplication of a and b is : "<<res<<endl; 
	} 
}; 
int main() 
{ 
	B b; 
	b.display(); 
	return 0; 
}
