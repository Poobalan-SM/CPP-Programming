  #include<iostream>
using namespace std;
class tree
{
	struct node
	{
		int data;
		node *left;
		node *right;
	}*root;
	public:
		tree()
		{
			root=NULL;
		}
		node* insert(int x,node *T)
		{
			if(T==NULL)
			{
				T=new node;
				T->data=x;
				T->left=T->right=NULL;
			}
			else if(x<T->data)
				T->left=insert(x,T->left);
			else if(x>T->data)
				T->right=insert(x,T->right);
			return T;
		}
		void inorder(node *T)
		{
			if(T!=NULL)
			{
			inorder(T->left);
			cout<<T->data<<' ';
			inorder(T->right);
			}
		}
		void insertion()
		{
			root=insert(6,root);
			root=insert(7,root);
			root=insert(5,root);
			root=insert(3,root);
			root=insert(4,root);
			root=insert(2,root);
			root=insert(1,root);
		}
		void display()
		{
			inorder(root);
			cout<<endl;
		}
		node* find(int x,node *T)
		{
			if(T==NULL)
				return NULL;
			if(x<T->data)
				return find(x,T->left);
			else if(x>T->data)
				return find(x,T->right);
			else
				return T;
		}
		void finding()
		{
			int x;
			cout<<"Enter the Element to found :";
			cin>>x;
			node* T;
			T=find(x,root);
			if(T==NULL)
				cout<<"Not Found"<<endl;
			else
				cout<<"Found"<<endl;
		}
		node* findmin(node *T)
		{
			if(T==NULL)
				return NULL;
			else
				if(T->left==NULL)
					return T;
				else
					return findmin(T->left);
		}
		void findingmin()
		{
			node* T;
			T=findmin(root);
			cout<<"The minimum term is "<<T->data<<endl;
		}
		node *findmax(node *T)
		{
			if(T!=NULL)
				while(T->right!=NULL)
					T=T->right;
				return T;		
		}
		void findingmax()
		{
			node *T;
			T=findmax(root);
			cout<<"The maximum term is "<<T->data<<endl;
		}
		node* deletion(int x,node *T)
		{
			node *temp;
			if(T==NULL)
				cout<<"Element not found";
			else
			{
				if(x<T->data)
					T->left=deletion(x,T->left);
				else if(x>T->data)
					T->right=deletion(x,T->right);
				else
				{
					if(T->left&&T->right)
					{
						temp=findmin(T->right);
						T->data=temp->data;
						T->right=deletion(T->data,T->right);
					}
					else
					{
						temp=T;
						if(T->left==NULL)
							T=T->right;
						else if(T->right==NULL)
							T=T->left;
					}
					delete(temp);
				}
			}
			return T;
		}
		void deleting()
		{
			int x;
			cout<<"Enter the element to delete:";
			cin>>x;
			deletion(x,root);
			display();
		}
};
int main()
{
	tree ob;
	ob.insertion();
	ob.display();
	ob.finding();
	ob.findingmin(); 
	ob.findingmax();
	ob.deleting();
	return 0;
}
