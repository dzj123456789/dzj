#include<iostream>

#define PI 3.1415926
#define Max(a,b) (a>b)?a:b
#define Debug
#define XX(a) #a     //使用#会将a变成双引号字符串
#define XXX(a,b) a##b  //使用##会将ab连接起来 

using namespace std;

int main()
{
#ifndef Debug     //如果没有预编译 
	cout<<"Not Debug";
#endif

#ifdef  PI        //如果有 
	int ab=100;
	cout<<PI<<endl;
	cout<<XX(hellow)<<endl; 
	cout<<XXX(a,b)<<endl;
#endif
	return 0;
}
