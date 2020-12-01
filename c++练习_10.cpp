#include<iostream>
using namespace std;

namespace mysapce{
	void fun(){
		cout<<"The fun space"<<endl; 
	} 
} 

namespace myspace2{
	void a1(){
		cout<<"I am A1"<<endl;
	}
	void a2(){
		cout<<"I am A2"<<endl;
	}
	namespace myspace2_1{
		void a3()
		{
			cout<<"I am A2_1"<<endl; 
		 } 
	}
} 
using namespace myspace2;     //使用using namespace + 名字 可直接使用命名空间的函数 
using namespace myspace2::myspace2_1;   //只使用了myspace2_1这个命名空间 
int main()               //myspace::a1  加冒号可以访问命名空间，内部的命名空间 
{
	mysapce::fun();     //使用名字::函数变量等 
	a1();
	a2();
	a3();
	return 0;
}
