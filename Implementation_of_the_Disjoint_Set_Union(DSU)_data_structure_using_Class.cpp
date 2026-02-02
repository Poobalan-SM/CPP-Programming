#include<iostream>
#define max 20
using namespace std;
class set
{
	public:
		int x;
		int *makeset()
		{
			int i;
			cout<<"Enter the number of set:";
			cin>>x;
			int* djset=new int[x];
			for(i=1;i<x+1;i++)
				djset[i]=-1;
			return djset;
		}
		void print(int*djset)
		{
			int i;
			for(i=1;i<x+1;i++)
				cout<<i<<"\t"<<djset[i]<<endl;
			cout<<endl;
		}
		int find(int *djset,int i)
		{
			if(djset[i]<0)
				return i;
			return find(djset,djset[i]);
		}
		void unionf(int *djset,int x,int y)
		{
			int xset=find(djset,x);
			int yset=find(djset,y);
			if(xset!=yset)
				djset[yset]=xset;
			cout<<endl;
		}
		void unionbysize(int *djset,int x,int y)
		{
			int temp;
			int xset=find(djset,x);
			int yset=find(djset,y);
			if(xset!=yset)
			{
				temp=djset[xset]+djset[yset];
				if(djset[xset]>djset[yset])
				{
					djset[xset]=yset;
					djset[yset]=temp;
				}
				else
				{
					djset[yset]=xset;
					djset[xset]=temp;
				}
			}
		}
		void unionbyheight(int *djset,int x,int y)
		{
			int xset=find(djset,x);
			int yset=find(djset,y);
			if(xset!=yset)
			{
				if(djset[yset]<djset[xset])
					djset[xset]=yset;
				else
				{
					if(djset[xset]==djset[yset])
						djset[xset]--;
					djset[yset]=xset;
				}
			}
		}
};
int main()
{
	set ob;
	int ch;
	int *djset=ob.makeset();
	ob.print(djset);
	cout<<"Enter 1 for normal union\t 2 for unionby size\t 3 for unionby height:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			ob.unionf(djset,4,2);
			ob.print(djset);
			break;
		case 2:
			ob.unionbysize(djset,1,2);
			ob.print(djset);
			break;
		case 3:
			ob.unionbyheight(djset,2,3);
			ob.print(djset);
			break;
		default:
			cout<<"Wrong Choice";
	}
	int x=ob.find(djset,4);
	cout<<x;
	return 0;
}
