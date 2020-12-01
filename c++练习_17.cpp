#include<iostream>
#include<list>
#include<cstdlib>
 
using namespace std;

int main()
{
	list<int> list1;
	for(int i=0;i<10;i++)
		{
			list1.push_back(rand()%100);
		}
	for(list<int>::iterator it=list1.begin();it!=list1.end();it++)
		cout<<*it<<'\t';
	cout<<endl;
	//list1.clear();     //删除所有元素 
	//list1.begin()    //返回迭代器第一个元素
	//list1.end();     //返回迭代器最后一个元素
	//list1.front()
	//list1.back()
	//list1.empty()
	//lst1.pop_back();  //删除最后一个元素 
	//list1.pop_front();  //删除第一个元素 
	//list1.push_back();  //在list的末尾添加一个元素 
	//list1.push_front();  //在list的头部添加一个元素
	//list1.size();
	//list1.erase(list1.begin(),list1.begin()+1);    //指定删除对象 
	list1.sort();       //排序 
	list1.reverse();     //倒转元素
	for(list<int>::iterator it=list1.begin();it!=list1.end();it++)
		cout<<*it<<'\t';
	return 0;
}
