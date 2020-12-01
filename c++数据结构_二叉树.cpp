#include<iostream>
using namespace std;

class mytree
{
	public:
		struct Node{        //节点 
		int data;
		Node *left;  //左节点 
		Node *right;  //右节点 
		}; 
		mytree()
		{
			head=nullptr;   //头结点为空的，空树 
		} 
		~mytree()
		{
			clear(head);
			head=nullptr;
		}
		void clear(Node *head)
		{
			if(del1==nullptr) return 0;
			clear(head->left);
			clear(head->right);
			delete head;
		 } 
		Node *insert(Node *int data)  //插入数据 
		{
			Node *p=head;
			if(p==nullptr)
			{
				p=new Node;
				p->data=data;
				p->left=p->right=nullptr;
				return p;
			}
			else
			{
				Node *inc=new Node;
				inc->data=data;
				inc->left=insert()
			}
		}
	private:
		Node *head=new Node;  //头结点 
}


void creattree(Node *p)   
{
	
}
int main()
{
	Node head;
	head.data=100;
	cout<<head.data<<endl; 
	return 0;
 } 
