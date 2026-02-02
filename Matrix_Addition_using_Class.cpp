#include<iostream>
using namespace std;
class Madd
{
	int m1[2][2],m2[2][2],ans[2][2];
	public:
		void input();
		void addition();
		void output();
};
void Madd::input()
{
	int i,j;
	cout<<"Enter the matrix 1 elements:";
	for (i=0;i<2;i++)
		for (j=0;j<2;j++)
			cin>>m1[i][j];
	cout<<"Enter the matrix 2 elements:";		
	for (i=0;i<2;i++)
		for (j=0;j<2;j++)
			cin>>m2[i][j];
}
void Madd::addition()
{
	int i,j;
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			ans[i][j]=m1[i][j]+m2[i][j];
}
void Madd::output()
{
	int i,j;
	cout<<"The sum of two Matrix is "<<endl;
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
			cout<<ans[i][j]<<" ";
		cout<<endl;
	}
}
int main()
{
	Madd m;
	m.input();
	m.addition();
	m.output();
	return 0;
}

