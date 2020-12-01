#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
//vector是一种动态数组，在内存中具有连续的存储空间，支持快速随机访问。
//由于具有连续的存储空间，所以在插入和删除操作方面，效率比较慢。其常用操作如下： 
int main()
{
	vector<int> ve2(10,3);  //申请10个空间为3 
	vector<string> ve3;     //创建一个string 容器 
	for(int i=0;i<ve2.size();)
	{
		cout<<ve2[i++]<<'\t';
		ve3.push_back("hellow");   //在末尾插入数据 
	}
	ve3.insert(ve3.begin(),"bob");   //在某一个位置插入  ve3.begin()开始位置 ve3.end()末尾位置
	ve3.insert(ve3.end()-2,3,"tom");   //插入3个"tom" 
	ve3.pop_back();                    //删除末尾元素 
	cout<<endl;
	if(!ve3.empty())                //判断容器是否为空 
	for(int i=0;i<ve3.size();) //遍历vector ve3.size()返回容器大小 
	{
		cout<<ve3[i++]<<'\t';  //可以通过下标来获取元素 
	}
	for(vector<int>::iterator it=ve2.begin();it!=ve2.end();it++)  //使用迭代器遍历元素 
		cout<<*it<<'\t'<<endl; 
	return 0;
}



















