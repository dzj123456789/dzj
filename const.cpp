#include<iostream>
using namespace std;

struct Node{        //节点 
		int data;
		Node *left;  //左节点 
		Node *right;  //右节点 
	};
int main()
{
	
	Node *head=new Node;
	cout << "dddd" << endl;
	head->data = 10;
	cout << "head->data:" << head->data << endl;
	Node *p = head;
	p->data = 20;
	cout << "head->data:" << head->data << endl;
	delete head;
	return 0;
}

