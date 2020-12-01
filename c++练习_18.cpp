#include<iostream>
#include<map>
#include<set>     //值就是key 
using namespace std;

int main()
{
	map<int,string> mp1; //map使用一个key和储存对象构成的红黑树结构
	mp1.insert(map<int,string>::value_type(001,"xiaoming"));
	mp1.insert(map<int,string>::value_type(002,"xiaozhang"));  //使用map插入 
	mp1.insert(pair<int,string>(003,"xiaohong"));  //使用pair插入 
	mp1[004]="xiaojun";  //使用数组插入，会覆盖。前两种会检查key是否存在 
	mp1.erase(001);   //使用key删除 
	for(map<int,string>::iterator it=mp1.begin();it!=mp1.end();it++)
		cout<<it->first<<'\t'<<it->second<<'\t'; 
	cout<<endl;
	string aa=mp1.find(003)->second;
	cout<<aa<<endl;  //使用first和second访问key和内容 
	
	set<int> s1;
	s1.insert(12);
	s1.insert(8);
	s1.insert(3);
	s1.erase(3);  //删除
	s1.insert(13);
	for(set<int>::iterator it=s1.begin();it!=s1.end();it++)
		cout<<*it<<'\t';
	
	return 0;
}
