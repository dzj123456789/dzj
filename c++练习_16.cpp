#include<iostream>
#include<deque>  //double ended queue 双端队列
//双向队列不论在尾部或头部插入元素，都十分迅速。
//而在中间插入元素则会比较费时，因为必须移动中间其他的元素。 

using namespace std;

int main()
{
	deque<int> que;
	for(int i=10;i<20;)
		que.push_back(i++); 
	for(deque<int>::iterator it=que.begin();it!=que.end();)
		cout<<*it++<<'\t';
	cout<<'\n'<<(que.at(4)=16)<<'\t'<<que[4]<<endl;
	cout<<que[4]<<endl;     //使用que.at[4]可以返回对应引用 
	que.front()=98;    //返回第一个元素引用
	que.back()=88;    //返回第一个元素引用
	que.push_front(11);  //前加入 
	que.pop_back();      //后删除 
	//que.erase(12);
	for(deque<int>::iterator it=que.begin();it!=que.end();it++)
		cout<<*it<<'\t';
	return 0; 
 } 
