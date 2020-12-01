#include<iostream>
using namespace std;
int main()
{
	int a=12,b=13;
	//const int *i=&a;
	int * const i=&a;
	i=&b;
	cout<<*i<<endl;
	return 0;
 } 
